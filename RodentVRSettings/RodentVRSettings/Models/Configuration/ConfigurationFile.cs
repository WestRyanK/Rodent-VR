using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Models.Configuration
{
    public class ConfigurationFile : MultiEntry
    {
		public ConfigurationFile() : base("Root")
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
    }

}
