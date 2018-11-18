using System.Collections.Generic;
using System.Drawing;

namespace BehaviorVisualizer.Models
{
	public class BehaviorVisualizationRenderer
	{
		private const float SCALE = 0.001f;
		public static Bitmap Render(List<BehaviorSnapshot> behaviorSnapshots, BehaviorVisualizationRendererSettings settings)
		{
			Bitmap bmp = new Bitmap((int)(settings.Width * SCALE), (int)(settings.Height * SCALE));
			using (Graphics g = Graphics.FromImage(bmp))
			{
				g.Clear(settings.BackgroundColor);
				if (settings.BackgroundImage != null)
					g.DrawImage(settings.BackgroundImage, 0, 0, settings.Width * SCALE, settings.Height * SCALE);

				for (int i = 1; i < behaviorSnapshots.Count; i++)
				{
					Draw(g, behaviorSnapshots[i], behaviorSnapshots[i - 1], settings);
				}
			}

			return bmp;
		}

		static void Draw(Graphics g, BehaviorSnapshot snapshotA, BehaviorSnapshot snapshotB, BehaviorVisualizationRendererSettings settings)
		{
			Point pA = GetPoint(snapshotA, settings);
			Point pB = GetPoint(snapshotB, settings);
			float width = GetWidth(snapshotA, snapshotB, settings);

			switch (settings.PathStyle)
			{
				case BehaviorVisualizationRendererSettings.PathStyleEnum.Dots:
					float halfWidth = width / 2.0f;
					using (SolidBrush b = new SolidBrush(settings.PathColor))
					{
						g.FillEllipse(b, pA.X - halfWidth, pA.Y - halfWidth, width, width);
					}
					break;
				case BehaviorVisualizationRendererSettings.PathStyleEnum.Lines:
					using (Pen p = new Pen(settings.PathColor, width))
					{
						p.EndCap = System.Drawing.Drawing2D.LineCap.Round;
						g.DrawLine(p, pA, pB);
					}
					break;
				default:
					break;
			}
		}

		static Point GetPoint(BehaviorSnapshot snapshot, BehaviorVisualizationRendererSettings settings)
		{
			Vector offset = snapshot.Position - settings.ImageOriginPosition;
			Vector pixelPosition = offset * settings.PixelsPerWorldUnit * SCALE;
			return new Point((int)pixelPosition.X, (int)pixelPosition.Y);
		}

		static float GetWidth(BehaviorSnapshot snapshotA, BehaviorSnapshot snapshotB, BehaviorVisualizationRendererSettings settings)
		{
			return settings.PathWidth * SCALE;
		}
	}
}
