using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Models.Configuration
{
	public class MultiEntry : Entry
	{
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

		public string[] GetConfigurationStrings()
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
	}
}
