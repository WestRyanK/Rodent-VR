using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace RodentVRSettings.Models.Configuration
{
	public class Entry
	{
		protected const string ENTRY_REGEX = @"^\s*(\w+)=(.+)";
		
		#region Properties
		#region Entry Name
		protected string entryName;

		public string EntryName
		{
			get { return entryName; }
			set { entryName = value; }
		}
		#endregion

		#region Entry Value
		protected object entryValue;

		public object EntryValue
		{
			get { return entryValue; }
			//set { entryValue = value; }
		}
		#endregion
		#endregion

		public Entry(string entryName, object entryValue)
		{
			this.entryName = entryName;
			this.entryValue = entryValue;
		}

		public override string ToString()
		{
			var floatValue = entryValue as float?;
			if (floatValue.HasValue)
				return $"{entryName}={entryValue:0.0###########}";
			else
				return $"{entryName}={entryValue}";
		}

		protected static Entry ParseConfigurationLine(string line)
		{
			line = line.Trim();
			var match = Regex.Match(line, Entry.ENTRY_REGEX);
			var entryName = match.Groups[1].Value;
			var entryValueString = match.Groups[2].Value;

			Entry entry;
			if (int.TryParse(entryValueString, out int entryValueInt))
			{
				entry = new Entry(entryName, entryValueInt);
			}
			else if (float.TryParse(entryValueString, out float entryValueFloat))
			{
				entry = new Entry(entryName, entryValueFloat);
			}
			else if (bool.TryParse(entryValueString, out bool entryValueBool))
			{
				entry = new Entry(entryName, entryValueBool);
			}
			else
			{
				entry = new Entry(entryName, entryValueString);
			}

			return entry;
		}
	}
}
