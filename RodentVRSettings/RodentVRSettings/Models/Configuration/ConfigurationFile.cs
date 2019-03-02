using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Models.Configuration
{
    public class ConfigurationFile : MultiEntry
    {

		private const string ROOTNAME = "Root";
		public ConfigurationFile() : base(ROOTNAME)
		{
		}

		public void WriteConfigurationToFile(string fileName)
		{
			string contents = this.ToString();

			System.IO.File.WriteAllText(fileName, contents);
		}

		public override string ToString()
		{
			var entryStrings = this.GetConfigurationStrings();
			var entryString = string.Join("\n", entryStrings);

			return entryString;
		}

		public void ReadConfigurationFromFile(string fileName)
		{
			string[] lines = System.IO.File.ReadAllLines(fileName);

			var entries = ConfigurationFile.ParseConfigurationLines(lines);
		}

		private static ConfigurationFile ParseConfigurationLines(string[] lines)
		{
			ConfigurationFile root = new ConfigurationFile();

			foreach (var line in lines)
			{
				if (MultiEntry.IsMultiEntry(line))
				{
					var multiEntry = MultiEntry.ParseConfigurationLine(line);
					root.AddConfigurationEntry(multiEntry);
				}
				else
				{
					var entry = Entry.ParseConfigurationLine(line);
					root.AddConfigurationEntry(entry);
				}
			}

			return root;
		}
    }

}
