using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Models.Configuration
{
	public class MultiEntry : Entry
	{
		protected const string MULTIENTRY_REGEX = @"^\s*\w+=\(";
		protected const int TRAILING_MULTIENTRY_LENGTH = 2; // "=(" is trailing part of string
		protected const char END_OF_MULTIENTRY = ')';
		protected const char MULTIENTRY_SEPARATOR = ',';
		protected static readonly char[] END_OF_ENTRY = new char[] {END_OF_MULTIENTRY, MULTIENTRY_SEPARATOR};

		protected List<Entry> entries;

		public List<Entry> Entries
		{
			get { return entries; }
		}

		public MultiEntry(string entryName) : base(entryName, null)
		{
			this.entries = new List<Entry>();
			this.entryValue = this.entries;
		}

		public void AddConfigurationEntry(string entryName, object entryValue)
		{
			this.entries.Add(new Entry(entryName, entryValue));
		}

		public void AddConfigurationEntry(Entry entry)
		{
			this.entries.Add(entry);
		}

		public Entry GetFirstEntryByName(string name)
		{
			foreach (var entry in this.entries)
			{
				if (entry.EntryName == name)
					return entry;
			}
			return null;
		}

		public List<Entry> GetEntriesByName(string name)
		{
			var entries = new List<Entry>();
			foreach (var entry in this.entries)
			{
				if (entry.EntryName == name)
					entries.Add(entry);
			}
			return entries;
		}

		#region Make Configuration String
		protected string[] GetConfigurationStrings()
		{
			var configurationStrings = from entry in this.entries
									   select entry.ToString();
			var configurationStringArray = configurationStrings.ToArray();

			return configurationStringArray;
		}

		public override string ToString()
		{
			var entryStrings = this.GetConfigurationStrings();
			var sb = new StringBuilder();
			sb.Append($"{this.EntryName}=(");
			for (int i = 0; i < entryStrings.Length - 1; i++)
			{
				sb.Append($"{entryStrings[i]}, ");
			}
			sb.Append($"{entryStrings[entryStrings.Length - 1]})");

			return sb.ToString();
		}
		#endregion

		#region Parse Configuration Strings
		protected static MultiEntry ParseConfigurationLine(string line)
		{
			return MultiEntry.DestructivelyParseConfigurationLine(ref line);
		}

		private static MultiEntry DestructivelyParseConfigurationLine(ref string line)
		{
			var match = Regex.Match(line, Entry.ENTRY_REGEX);
			var entryName = match.Groups[1].Value;
			var multiEntry = new MultiEntry(entryName);
			line = line.Remove(0, match.Groups[1].Index + match.Groups[1].Length + TRAILING_MULTIENTRY_LENGTH);
			do
			{
				if (MultiEntry.IsMultiEntry(line))
				{
					MultiEntry.ParseMultiEntryChild(ref line, multiEntry);
				}
				else
				{
					MultiEntry.ParseEntryChild(ref line, multiEntry);
				}
			} while (line[0] != END_OF_MULTIENTRY);

			return multiEntry;
		}

		private static void ParseMultiEntryChild(ref string line, MultiEntry parent)
		{
			var multiEntryChild = MultiEntry.DestructivelyParseConfigurationLine(ref line);
			parent.AddConfigurationEntry(multiEntryChild);

			if (line.Length > 1 && line[1] == MULTIENTRY_SEPARATOR)
				line = line.Substring(2);
			else
				line = line.Substring(1);
		}

		private static void ParseEntryChild(ref string line, MultiEntry parent)
		{
			var index_of_separator = line.IndexOfAny(END_OF_ENTRY);
			var entryString = line.ToString().Substring(0, index_of_separator);
			var entryChild = Entry.ParseConfigurationLine(entryString);
			parent.AddConfigurationEntry(entryChild);

			int offset = 0;
			if (line[index_of_separator] == MULTIENTRY_SEPARATOR)
				offset = 1;
			line = line.Remove(0, index_of_separator + offset);
		}

		public static bool IsMultiEntry(string line)
		{
			bool isMultiEntry = Regex.IsMatch(line, MULTIENTRY_REGEX);
			return isMultiEntry;
		}
		#endregion
	}
}
