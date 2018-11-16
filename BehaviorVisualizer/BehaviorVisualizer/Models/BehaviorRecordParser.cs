using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BehaviorVisualizer.Models
{
	public class BehaviorRecordParser
	{
		public static List<BehaviorSnapshot> Parse(string data)
		{
			var snapshots = new List<BehaviorSnapshot>();

			string[] lines = data.Split('\n');
			foreach (var line in lines)
			{
				string[] values = line.Split('\t');
				float timestamp = float.Parse(values[0]);
				int region = int.Parse(values[1]);
				float px = float.Parse(values[2]);
				float py = float.Parse(values[3]);
				float pz = float.Parse(values[4]);
				float fx = float.Parse(values[5]);
				float fy = float.Parse(values[6]);
				float fz = float.Parse(values[7]);

				Vector position = new Vector(px, py, pz);
				Vector forward = new Vector(fx, fy, fz);
				var snapshot = new BehaviorSnapshot(timestamp, region, position, forward);
				snapshots.Add(snapshot);
			}

			return snapshots;
		}
	}
}
