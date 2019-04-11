using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace RodentVRSettings.Models.Configuration
{
	public class HeaderEntry : Entry
	{

		protected const string HEADERENTRY_REGEX = @"^\[(.+)\]$";

		public HeaderEntry(string headerText) : base(string.Empty, headerText)
		{
		}

		public override string ToString()
		{
			return $"[{this.EntryValue}]";
		}

		public static bool IsHeaderEntry(string line)
		{
			bool isHeaderEntry = Regex.IsMatch(line, HEADERENTRY_REGEX);
			return isHeaderEntry;
		}

		public static HeaderEntry ParseHeaderLine(string line)
		{
			line = line.Trim();
			var match = Regex.Match(line, HeaderEntry.HEADERENTRY_REGEX);
			var headerText = match.Groups[1].Value;

			var headerEntry = new HeaderEntry(headerText);
			return headerEntry;
		}
	}
}
