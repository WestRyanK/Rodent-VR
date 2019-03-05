using RodentVRSettings.Converters;
using RodentVRSettings.Models.Configuration;
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace RodentVRSettings.Views
{
	/// <summary>
	/// Interaction logic for MazeVisualizer.xaml
	/// </summary>
	public partial class MazeVisualizer : UserControl
	{

		#region Maze Property
		private MazesEnum maze;

		public MazesEnum Maze
		{
			get { return maze; }
			set
			{
				maze = value;
				var defaultMaterial = MaterialsEnum.checkers_large;
				switch (maze)
				{
					case MazesEnum.maze_01_level:
						this.materials = Enumerable.Repeat(defaultMaterial, ConfigurationSettings.MAZE_01_MATERIAL_COUNT).ToArray();
						break;
					case MazesEnum.maze_02_level:
						this.materials = Enumerable.Repeat(defaultMaterial, ConfigurationSettings.MAZE_02_MATERIAL_COUNT + 1).ToArray();
						this.materials[0] = MaterialsEnum.dots_1;
						this.materials[1] = MaterialsEnum.stripes_small;
						this.materials[2] = MaterialsEnum.checkers_large;
						this.materials[3] = MaterialsEnum.gray;
						break;
					default:
						throw new Exception("Should update switch plz!");
				}
				this.Update();
			}
		}
		#endregion

		#region Materials Property
		private MaterialsEnum[] materials;

		public MaterialsEnum[] Materials
		{
			get { return materials; }
		}
		#endregion

		public event EventHandler<int> OnMazeClicked;

		private const double MATERIAL_SCALE = 1 / 10f;
		private List<ImageBrush> materialBrushes = new List<ImageBrush>();
		private List<Bitmap> maskImages = new List<Bitmap>();

		public MazeVisualizer()
		{
			InitializeComponent();
			this.Maze = MazesEnum.maze_02_level;
			this.Update();
		}

		public void SetMaterial(int index, MaterialsEnum material)
		{
			this.materials[index] = material;
			this.Update();
		}

		protected override void OnPreviewMouseDown(MouseButtonEventArgs e)
		{
			base.OnPreviewMouseDown(e);
			var position = e.GetPosition(this);
			var index = GetMaskIndex(position.X, position.Y);
			OnMazeClicked?.Invoke(this, index);
		}

		private void Update()
		{
			this.gridImage.Children.Clear();
			this.materialBrushes.Clear();
			foreach (var maskImage in this.maskImages)
			{
				maskImage.Dispose();
			}
			this.maskImages.Clear();

			for (int i = 0; i < this.Materials.Length; i++)
			{
				var layer = new System.Windows.Shapes.Rectangle();
				var materialBrush = GetMaterialBrush(this.Materials[i]);
				var maskImage = GetMaskImage(this.Maze, i);
				var maskBrush = GetMaskBrush(maskImage);

				this.materialBrushes.Add(materialBrush);
				this.maskImages.Add(maskImage.ToGDIBitmap());

				layer.Fill = materialBrush;
				layer.OpacityMask = maskBrush;
				this.gridImage.Children.Add(layer);
			}
			this.gridImage.Children.Add(tb);
		}

		protected override void OnRenderSizeChanged(SizeChangedInfo sizeInfo)
		{
			base.OnRenderSizeChanged(sizeInfo);
			double materialScale = this.GetMaterialScale();
			var viewport = new Rect(0, 0, materialScale, materialScale);
			foreach (var materialBrush in this.materialBrushes)
			{
				materialBrush.Viewport = viewport;
			}
		}

		private static ImageBrush GetMaterialBrush(MaterialsEnum material)
		{
			var materialImage = material.ToBitmapImageResource();
			var materialBrush = new ImageBrush(materialImage);

			materialBrush.ViewportUnits = BrushMappingMode.Absolute;
			materialBrush.Stretch = Stretch.Uniform;
			materialBrush.Viewport = new Rect(0, 0, 1, 1);
			materialBrush.TileMode = TileMode.Tile;
			return materialBrush;
		}

		private double GetMaterialScale()
		{
			var smallDimension = (this.ActualWidth < this.ActualHeight) ? this.ActualWidth : this.ActualHeight;
			return smallDimension * MATERIAL_SCALE;
		}

		private static BitmapImage GetMaskImage(MazesEnum maze, int maskIndex)
		{
			string resourcePath = $"{maze}_mask_{maskIndex:00}";
			var maskImage = resourcePath.ToBitmapImageResource();
			return maskImage;
		}

		private static ImageBrush GetMaskBrush(BitmapImage maskImage)
		{
			var maskBrush = new ImageBrush(maskImage);
			maskBrush.Stretch = Stretch.Uniform;

			return maskBrush;
		}

		private System.Drawing.Point TransformToMaskSpace(double x, double y, int maskWidth, int maskHeight)
		{
			double scale;
			if (this.ActualWidth < this.ActualHeight)
				scale = this.ActualWidth / maskWidth;
			else
				scale = this.ActualHeight / maskHeight;
			double scaledWidth = scale * maskWidth;
			double scaledHeight = scale * maskHeight;
			double offsetX = (this.ActualWidth - scaledWidth) * 0.5f;
			double offsetY = (this.ActualHeight - scaledHeight) * 0.5f;

			double transformedX = (x - offsetX) / scale;
			double transformedY = (y - offsetY) / scale;

			return new System.Drawing.Point((int)transformedX, (int)transformedY);
		}

		private int GetMaskIndex(double x, double y)
		{
			for (int i = 0; i < this.maskImages.Count; i++)
			{
				var point = TransformToMaskSpace(x, y, this.maskImages[i].Width, this.maskImages[i].Height);
				if (point.X >= 0 && point.Y >= 0 && point.X < maskImages[i].Width && point.Y < maskImages[i].Height)
				{
					if (maskImages[i].GetPixel(point.X, point.Y).A > 0)
						return i;
				}
			}

			return -1;
		}
	}
}
