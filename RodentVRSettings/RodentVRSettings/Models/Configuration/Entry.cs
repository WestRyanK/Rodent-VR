using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Models.Configuration
{
	public class Entry
	{
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
			return $"{entryName}={entryValue}";
		}
	}
}
