using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BehaviorVisualizer.Models
{
	public class BehaviorVisualizationRendererSettings
	{
		#region Width
		private int width;

		public int Width
		{
			get { return width; }
			set { width = value; }
		}
		#endregion

		#region Height
		private int height;

		public int Height
		{
			get { return height; }
			set { height = value; }
		}
		#endregion

		#region ImageOriginPosition
		private Vector imageOriginPosition;

		public Vector ImageOriginPosition
		{
			get { return imageOriginPosition; }
			set { imageOriginPosition = value; }
		}
		#endregion

		#region Style
		private LineStyleEnum lineStyle;

		public LineStyleEnum LineStyle
		{
			get { return lineStyle; }
			set { lineStyle = value; }
		}
		#endregion

		public enum LineStyleEnum
		{
			Dots,
			Lines
		}
	}
}
