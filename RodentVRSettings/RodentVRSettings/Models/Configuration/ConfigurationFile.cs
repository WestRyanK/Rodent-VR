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

		public void SaveFile(string fileName)
		{
			ConfigurationFile.Save(fileName, this);
		}

		public static void Save(string fileName, ConfigurationFile file)
		{
			string contents = file.ToString();

			System.IO.File.WriteAllText(fileName, contents);
		}

		public override string ToString()
		{
			var entryStrings = this.GetConfigurationStrings();
			var entryString = string.Join(Environment.NewLine, entryStrings);

			return entryString;
		}

		public void ReadFile(string fileName)
		{
			var readFile = Read(fileName);

			foreach (var entry in readFile.Entries)
			{
				this.AddConfigurationEntry(entry);
			}
		}

		public static ConfigurationFile Read(string fileName)
		{
			string[] lines = System.IO.File.ReadAllLines(fileName);

			var readFile = ConfigurationFile.ParseConfigurationLines(lines);
			return readFile;
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
