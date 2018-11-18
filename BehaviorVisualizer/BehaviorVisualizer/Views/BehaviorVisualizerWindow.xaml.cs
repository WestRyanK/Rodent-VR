using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using BehaviorVisualizer.Converters;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using MahApps.Metro;
using System.Windows.Shapes;
using MahApps.Metro.Controls;
using BehaviorVisualizer.Models;
using System.Drawing;
using Microsoft.Win32;

namespace BehaviorVisualizer
{
	/// <summary>
	/// Interaction logic for MainWindow.xaml
	/// </summary>
	public partial class MainWindow : MetroWindow, Contracts.BehaviorVisualizerViewContract
	{
		public Contracts.BehaviorVisualizerPresenterContract Presenter { get; set; }

		public MainWindow()
		{
			InitializeComponent();
			this.Presenter = new Presenters.BehaviorVisualizerPresenter();
			this.Presenter.View = this;
			this.Presenter.Reset();

			this.CreateBackgroundOptions();
		}

		private void CreateBackgroundOptions()
		{
			var maze_01_outline = new BehaviorVisualizationRendererSettings();
			maze_01_outline.ImageOriginPosition = new Models.Vector(-300, -300, 0);
			maze_01_outline.WorldWidth = 3200;
			maze_01_outline.WorldHeight = 650;
			maze_01_outline.BackgroundImage = Properties.Resources.maze_01_outline;
			maze_01_outline.Title = "Maze 01 Outline";

			var maze_01_ortho_textured = new BehaviorVisualizationRendererSettings();
			maze_01_ortho_textured.ImageOriginPosition = new Models.Vector(-300, -300, 0);
			maze_01_ortho_textured.WorldWidth = 3200;
			maze_01_ortho_textured.WorldHeight = 650;
			maze_01_ortho_textured.BackgroundImage = Properties.Resources.maze_01_ortho_textured;
			maze_01_ortho_textured.Title = "Maze 01 Orthographic";

			var maze_01_perspective = new BehaviorVisualizationRendererSettings();
			maze_01_perspective.ImageOriginPosition = new Models.Vector(-300, -300, 0);
			maze_01_perspective.WorldWidth = 3200;
			maze_01_perspective.WorldHeight = 650;
			maze_01_perspective.BackgroundImage = Properties.Resources.maze_01_perspective;
			maze_01_perspective.Title = "Maze 01 Perspective";

			var maze_01_perspective_textured = new BehaviorVisualizationRendererSettings();
			maze_01_perspective_textured.ImageOriginPosition = new Models.Vector(-300, -300, 0);
			maze_01_perspective_textured.WorldWidth = 3200;
			maze_01_perspective_textured.WorldHeight = 650;
			maze_01_perspective_textured.BackgroundImage = Properties.Resources.maze_01_perspective_textured;
			maze_01_perspective_textured.Title = "Maze 01 Perspective Textured";

			var maze_02_outline = new BehaviorVisualizationRendererSettings();
			maze_02_outline.ImageOriginPosition = new Models.Vector(-700, -1100, 0);
			maze_02_outline.WorldWidth = 1400;
			maze_02_outline.WorldHeight = 1400;
			maze_02_outline.BackgroundImage = Properties.Resources.maze_02_outline;
			maze_02_outline.Title = "Maze 02 Outline";

			var maze_02_ortho_textured = new BehaviorVisualizationRendererSettings();
			maze_02_ortho_textured.ImageOriginPosition = new Models.Vector(-700, -1100, 0);
			maze_02_ortho_textured.WorldWidth = 1400;
			maze_02_ortho_textured.WorldHeight = 1400;
			maze_02_ortho_textured.BackgroundImage = Properties.Resources.maze_02_ortho_textured;
			maze_02_ortho_textured.Title = "Maze 02 Orthographic";

			var maze_02_perspective = new BehaviorVisualizationRendererSettings();
			maze_02_perspective.ImageOriginPosition = new Models.Vector(-700, -1100, 0);
			maze_02_perspective.WorldWidth = 1400;
			maze_02_perspective.WorldHeight = 1400;
			maze_02_perspective.BackgroundImage = Properties.Resources.maze_02_perspective;
			maze_02_perspective.Title = "Maze 02 Perspective";

			var maze_02_perspective_textured = new BehaviorVisualizationRendererSettings();
			maze_02_perspective_textured.ImageOriginPosition = new Models.Vector(-700, -1100, 0);
			maze_02_perspective_textured.WorldWidth = 1400;
			maze_02_perspective_textured.WorldHeight = 1400;
			maze_02_perspective_textured.BackgroundImage = Properties.Resources.maze_02_perspective_textured;
			maze_02_perspective_textured.Title = "Maze 02 Perspective Textured";

			List<BehaviorVisualizationRendererSettings> items = new List<BehaviorVisualizationRendererSettings>();
			items.Add(maze_01_outline);
			items.Add(maze_01_ortho_textured);
			items.Add(maze_01_perspective);
			items.Add(maze_01_perspective_textured);
			items.Add(maze_02_outline);
			items.Add(maze_02_ortho_textured);
			items.Add(maze_02_perspective);
			items.Add(maze_02_perspective_textured);

			lbBackgrounds.ItemsSource = items;
		}

		#region Path Style
		private void rbPathDots_Checked(object sender, RoutedEventArgs e)
		{
			if (rbPathDots.IsChecked == true)
			{
				Presenter.PathStyle = Models.BehaviorVisualizationRendererSettings.PathStyleEnum.Dots;

				Presenter.Render();
			}
		}

		private void rbPathLines_Checked(object sender, RoutedEventArgs e)
		{
			if (rbPathLines.IsChecked == true)
			{
				Presenter.PathStyle = Models.BehaviorVisualizationRendererSettings.PathStyleEnum.Lines;

				Presenter.Render();
			}
		}

		public BehaviorVisualizationRendererSettings.PathStyleEnum PathStyle
		{
			set
			{
				switch (value)
				{
					case BehaviorVisualizationRendererSettings.PathStyleEnum.Dots:
						rbPathDots.IsChecked = true;
						break;
					case BehaviorVisualizationRendererSettings.PathStyleEnum.Lines:
						rbPathLines.IsChecked = true;
						break;
					default:
						break;
				}
			}
		}
		#endregion

		#region Path World Width
		private void nudPathWidth_ValueChanged(object sender, RoutedPropertyChangedEventArgs<double?> e)
		{
			Presenter.PathWorldWidth = (float)nudPathWidth.Value;

			Presenter.Render();
		}

		public float PathWorldWidth
		{
			set
			{
				nudPathWidth.Value = (double)value;
			}
		}
		#endregion

		#region Pixels Per World Unit
		private void nudResolution_ValueChanged(object sender, RoutedPropertyChangedEventArgs<double?> e)
		{
			Presenter.PixelsPerWorldUnit = (float)nudResolution.Value;

			Presenter.Render();
		}

		public float PixelsPerWorldUnit
		{
			set
			{
				nudResolution.Value = (double)value;
			}
		}
		#endregion

		#region Image Origin World Position
		public Models.Vector ImageOriginWorldPosition
		{
			set
			{
				nudWorldPositionX.Value = (double)value.X;
				nudWorldPositionY.Value = (double)value.Y;
			}
		}

		private void nudWorldPosition_ValueChanged(object sender, RoutedPropertyChangedEventArgs<double?> e)
		{
			Presenter.ImageOriginWorldPosition = new Models.Vector((float?)nudWorldPositionX.Value ?? 0.0f, (float?)nudWorldPositionY.Value ?? 0.0f, 0);

			Presenter.Render();
		}
		#endregion

		#region Image World Size
		public float ImageWorldWidth
		{
			set
			{
				nudSizeWidth.Value = (double)value;
			}
		}

		public float ImageWorldHeight
		{
			set
			{
				nudSizeHeight.Value = (double)value;
			}
		}

		private void nudSizeWidth_ValueChanged(object sender, RoutedPropertyChangedEventArgs<double?> e)
		{
			Presenter.ImageWorldWidth = (float)nudSizeWidth.Value;

			Presenter.Render();
		}

		private void nudSizeHeight_ValueChanged(object sender, RoutedPropertyChangedEventArgs<double?> e)
		{
			Presenter.ImageWorldHeight = (float)nudSizeHeight.Value;

			Presenter.Render();
		}
		#endregion

		#region Open Record File Name
		private void tbOpenRecordFileName_TextChanged(object sender, TextChangedEventArgs e)
		{
			Presenter.OpenRecordFileName = tbOpenRecordFileName.Text;

			Presenter.Render();
		}

		public string OpenRecordFileName
		{
			set
			{
				tbOpenRecordFileName.Text = value;
			}
		}
		#endregion

		private void bttnOpenRecordFileName_Click(object sender, RoutedEventArgs e)
		{
			OpenFileDialog openRecordFileDialog = new OpenFileDialog();
			bool? result = openRecordFileDialog.ShowDialog();
			if (result == true)
			{
				OpenRecordFileName = openRecordFileDialog.FileName;
			}
		}

		#region Save File Name

		private void tbSaveFileName_TextChanged(object sender, TextChangedEventArgs e)
		{
			Presenter.SaveFileName = tbSaveFileName.Text;
		}

		public string SaveFileName
		{
			set
			{
				tbSaveFileName.Text = value;
			}
		}
		#endregion

		private void bttnSaveFileName_Click(object sender, RoutedEventArgs e)
		{
			SaveFileDialog saveFileDialog = new SaveFileDialog();
			bool? result = saveFileDialog.ShowDialog();
			if (result == true)
			{
				SaveFileName = saveFileDialog.FileName;
			}
		}

		private void bttnSave_Click(object sender, RoutedEventArgs e)
		{
			Presenter.Save();
		}

		public System.Drawing.Color PathColor
		{
			set
			{
				cpPathColor.SelectedColor = System.Windows.Media.Color.FromArgb(value.A, value.R, value.G, value.B);
			}
		}

		public System.Drawing.Color BackgroundColor
		{
			set
			{
				cpBackgroundColor.SelectedColor = System.Windows.Media.Color.FromArgb(value.A, value.R, value.G, value.B);
			}
		}

		public Bitmap Preview
		{
			set
			{
				imgPreview.Source = value?.ToWpfBitmap();
			}
		}

		private void cpPathColor_SelectedColorChanged(object sender, RoutedPropertyChangedEventArgs<System.Windows.Media.Color?> e)
		{
			var color = cpPathColor.SelectedColor;
			Presenter.PathColor = System.Drawing.Color.FromArgb(color.Value.A, color.Value.R, color.Value.G, color.Value.B);

			Presenter.Render();
		}

		private void cpBackgroundColor_SelectedColorChanged(object sender, RoutedPropertyChangedEventArgs<System.Windows.Media.Color?> e)
		{
			var color = cpBackgroundColor.SelectedColor;
			Presenter.BackgroundColor = System.Drawing.Color.FromArgb(color.Value.A, color.Value.R, color.Value.G, color.Value.B);

			Presenter.Render();
		}

		private void lbBackgrounds_SelectionChanged(object sender, SelectionChangedEventArgs e)
		{
			var selected = (BehaviorVisualizationRendererSettings)lbBackgrounds.SelectedItem;
			Presenter.BackgroundImage = selected.BackgroundImage;
			Presenter.ImageOriginWorldPosition = selected.ImageOriginPosition;
			Presenter.ImageWorldHeight = selected.WorldHeight;
			Presenter.ImageWorldWidth = selected.WorldWidth;

			Presenter.Render();
		}

	}
}
