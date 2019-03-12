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
		public MazesEnum Maze
		{
			get { return (MazesEnum)GetValue(MazeProperty); }
			set { SetValue(MazeProperty, value); }
		}

		// Using a DependencyProperty as the backing store for Maze.  This enables animation, styling, binding, etc...
		public static readonly DependencyProperty MazeProperty =
			DependencyProperty.Register("Maze", typeof(MazesEnum), typeof(MazeVisualizer), new PropertyMetadata(MazesEnum.none, MazeChanged));

		private static void MazeChanged(DependencyObject d, DependencyPropertyChangedEventArgs e)
		{
			var control = d as MazeVisualizer;
			var defaultMaterial = MaterialsEnum.gray;
			var maze = (MazesEnum)e.NewValue;
			switch (maze)
			{
				case MazesEnum.maze_01_level:
					control.materials = Enumerable.Repeat(defaultMaterial, ConfigurationSettings.MAZE_01_MATERIAL_COUNT).ToArray();
					break;
				case MazesEnum.maze_02_level:
					control.materials = Enumerable.Repeat(defaultMaterial, ConfigurationSettings.MAZE_02_MATERIAL_COUNT).ToArray();
					break;
				default:
					throw new Exception("Should update switch plz!");
			}
			control.SelectedIndex = -1;
			control.Update();
		}
		#endregion

		#region Materials Property
		private MaterialsEnum[] materials;

		public MaterialsEnum[] Materials
		{
			get { return materials; }
		}
		#endregion

		#region SelectedIndex Property
		private int selectedIndex;

		public int SelectedIndex
		{
			get { return selectedIndex; }
			set
			{
				selectedIndex = value;
				OnSelectedMazeIndexChanged?.Invoke(this, selectedIndex);
			}
		}
		#endregion

		public event EventHandler<int> OnSelectedMazeIndexChanged;

		private const double MATERIAL_SCALE = 1 / 10f;
		private List<ImageBrush> materialBrushes = new List<ImageBrush>();
		private List<Bitmap> maskImages = new List<Bitmap>();
		private System.Windows.Shapes.Rectangle selectionLayer = new System.Windows.Shapes.Rectangle();
		//private TextBlock tb;

		public MazeVisualizer()
		{
			InitializeComponent();
			this.Maze = MazesEnum.maze_02_level;
			//tb = new TextBlock();
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
			this.SelectedIndex = index;
			OnSelectedMazeIndexChanged?.Invoke(this, index);
			this.UpdateSelection();
			//this.tb.Text = index.ToString();
		}

		private void UpdateSelection()
		{
				if (this.SelectedIndex >= 0)
				{
					var selectionBrush = GetMaskBrush(GetMaskImage(this.Maze, this.SelectedIndex, true));
					this.selectionLayer.Fill = selectionBrush;
					this.gridImage.Children.Remove(this.selectionLayer);
					this.gridImage.Children.Add(this.selectionLayer);
				}
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

			try
			{
				if (this.Materials != null)
				{
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
				}

				//this.gridImage.Children.Add(tb);
				this.UpdateSelection();
				this.UpdateMaterialScale();
			}
			catch (System.IO.IOException e)
			{

			}
		}

		private void UpdateMaterialScale()
		{
			double materialScale = this.GetMaterialScale();
			var viewport = new Rect(0, 0, materialScale, materialScale);
			foreach (var materialBrush in this.materialBrushes)
			{
				materialBrush.Viewport = viewport;
			}
		}

		protected override void OnRenderSizeChanged(SizeChangedInfo sizeInfo)
		{
			base.OnRenderSizeChanged(sizeInfo);
			UpdateMaterialScale();
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

		private static BitmapImage GetMaskImage(MazesEnum maze, int maskIndex, bool isSelection = false)
		{
			string name;
			if (isSelection)
				name = "selection";
			else
				name = "mask";

			string resourcePath = $"{maze}_{name}_{maskIndex:00}";
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
			double controlAspectRatio = this.ActualWidth / this.ActualHeight;
			double maskAspectRatio = (double)maskWidth / maskHeight;
			if (controlAspectRatio < maskAspectRatio)
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
