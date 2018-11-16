using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;
using System.Threading.Tasks;

namespace BehaviorVisualizer.Models
{
	public class BehaviorVisualizationRenderer
	{
		static Bitmap Render(List<BehaviorSnapshot> behaviorSnapshots, BehaviorVisualizationRendererSettings settings)
		{
			Bitmap bmp = new Bitmap(settings.Width, settings.Height);
			Graphics g = Graphics.FromImage(bmp);

			for (int i = 1; i < behaviorSnapshots.Count; i++)
			{
				Draw(g, behaviorSnapshots[i], behaviorSnapshots[i - 1], settings);
			}
		}

		static void Draw(Graphics g, BehaviorSnapshot snapshotA, BehaviorSnapshot snapshotB, BehaviorVisualizationRendererSettings settings)
		{
			Pen pen = Pens.Black;

			Point pA = GetPoint(snapshotA, settings);
			Point pB = GetPoint(snapshotB, settings);
			float width = GetWidth(snapshotA, snapshotB, settings);
			pen.Width = width;

			switch (settings.LineStyle)
			{
				case BehaviorVisualizationRendererSettings.LineStyleEnum.Dots:
					float halfWidth = width / 2.0f;
					g.DrawEllipse(pen, pA.X - halfWidth, pA.Y - halfWidth, width, width);
					break;
				case BehaviorVisualizationRendererSettings.LineStyleEnum.Lines:
					g.DrawLine(pen, pA, pB);
					break;
				default:
					break;
			}
		}

		static Point GetPoint(BehaviorSnapshot snapshot, BehaviorVisualizationRendererSettings settings)
		{
			Vector offset = snapshot.Position - settings.ImageOriginPosition;
		}

		static float GetWidth(BehaviorSnapshot snapshotA, BehaviorSnapshot snapshotB, BehaviorVisualizationRendererSettings settings)
		{
			
		}
	}
}
