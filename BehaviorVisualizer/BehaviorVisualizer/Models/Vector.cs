using System;

namespace BehaviorVisualizer.Models
{
	public class Vector
	{
		#region X
		private float x;

		public float X
		{
			get { return x; }
			set { x = value; }
		}
		public float R
		{
			get { return x; }
			set { x = value; }
		}
		#endregion

		#region Y
		private float y;

		public float Y
		{
			get { return y; }
			set { y = value; }
		}
		public float G
		{
			get { return y; }
			set { y = value; }
		}
		#endregion

		#region Z
		private float z;

		public float Z
		{
			get { return z; }
			set { z = value; }
		}
		public float B
		{
			get { return z; }
			set { z = value; }
		}
		#endregion

		public Vector(float x, float y, float z)
		{
			this.x = x;
			this.y = y;
			this.z = z;
		}

		public static Vector operator +(Vector a, Vector b)
		{
			Vector v = new Vector(a.X + b.X, a.Y + b.Y, a.Z + b.Z);
			return v;
		}

		public static Vector operator -(Vector a, Vector b)
		{
			Vector v = new Vector(a.X - b.X, a.Y - b.Y, a.Z - b.Z);
			return v;
		}

		public static Vector operator +(Vector a, float b)
		{
			Vector v = new Vector(a.X + b, a.Y + b, a.Z + b);
			return v;
		}

		public static Vector operator -(Vector a, float b)
		{
			Vector v = new Vector(a.X - b, a.Y - b, a.Z - b);
			return v;
		}

		public static Vector operator *(Vector a, float b)
		{
			Vector v = new Vector(a.X * b, a.Y * b, a.Z * b);
			return v;
		}

		public static Vector operator /(Vector a, float b)
		{
			Vector v = new Vector(a.X / b, a.Y / b, a.Z / b);
			return v;
		}

		public static float Dot(Vector a, Vector b)
		{
			float dot = a.X * b.X + a.Y * b.Y + a.Z * b.Z;
			return dot;
		}

		public static Vector Normalize(Vector a)
		{
			float length = (float)Math.Sqrt(Dot(a, a));
			Vector normalized = a / length;
			return normalized;
		}

		public override string ToString()
		{
			return $"{{ X={X:0.####}, Y={Y:0.####}, Z={Z:0.####} }}";
		}

		public override bool Equals(object obj)
		{
			Vector other = obj as Vector;
			if (other == null)
				return false;

			return (this.X == other.X && this.Y == other.Y && this.Z == other.Z) ;
		}
	}
}
