using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BehaviorVisualizer.Models
{
	public class BehaviorSnapshot
	{
		private float timestamp;

		public float Timestamp
		{
			get { return timestamp; }
			set { timestamp = value; }
		}
		private int region;

		public int Region
		{
			get { return region; }
			set { region = value; }
		}
		private Vector position;

		public Vector Position
		{
			get { return position; }
			set { position = value; }
		}
		private Vector forward;

		public Vector Forward
		{
			get { return forward; }
			set { forward = value; }
		}

		public BehaviorSnapshot(float timestamp, int region, Vector position, Vector forward)
		{
			this.timestamp = timestamp;
			this.region = region;
			this.position = position;
			this.forward = forward;
		}
	}
}
