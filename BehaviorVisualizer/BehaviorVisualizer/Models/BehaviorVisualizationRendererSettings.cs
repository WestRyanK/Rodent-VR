using System;

namespace BehaviorVisualizer.Models
{
	public class BehaviorVisualizationRendererSettings
	{
		#region Width

		public int Width
		{
			get
			{
				return (int)Math.Floor(worldWidth * pixelsPerWorldUnit);
			}
		}
		#endregion

		#region Height
		private int height;

		public int Height
		{
			get
			{
				return (int)Math.Floor(worldHeight * pixelsPerWorldUnit);
			}
		}
		#endregion

		#region World Width
		private float worldWidth;

		public float WorldWidth
		{
			get { return worldWidth; }
			set { worldWidth = value; }
		}
		#endregion

		#region World Height
		private float worldHeight;

		public float WorldHeight
		{
			get { return worldHeight; }
			set { worldHeight = value; }
		}
		#endregion

		#region Pixels Per World Unit
		private float pixelsPerWorldUnit;

		public float PixelsPerWorldUnit
		{
			get { return pixelsPerWorldUnit; }
			set { pixelsPerWorldUnit = value; }
		}
		#endregion

		#region Image Origin Position
		private Vector imageOriginPosition;

		public Vector ImageOriginPosition
		{
			get { return imageOriginPosition; }
			set { imageOriginPosition = value; }
		}
		#endregion

		#region Path Style
		private PathStyleEnum pathStyle;

		public PathStyleEnum PathStyle
		{
			get { return pathStyle; }
			set { pathStyle = value; }
		}
		#endregion

		#region Path World Width
		private float pathWorldWidth;

		public float PathWorldWidth
		{
			get { return pathWorldWidth; }
			set { pathWorldWidth = value; }
		}
		#endregion

		#region Path Width
		private float pathWidth;

		public float PathWidth
		{
			get
			{
				return pathWorldWidth * pixelsPerWorldUnit;
			}
		}
		#endregion

		private System.Drawing.Color pathColor;

		public System.Drawing.Color PathColor
		{
			get { return pathColor; }
			set { pathColor = value; }
		}

		public enum PathStyleEnum
		{
			None,
			Dots,
			Lines
		}
	}
}
