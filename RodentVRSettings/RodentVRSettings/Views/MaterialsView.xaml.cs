using RodentVRSettings.Models.Configuration;
using RodentVRSettings.Presenters;
using System;
using System.Collections.Generic;
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
	/// Interaction logic for MaterialsView.xaml
	/// </summary>
	public partial class MaterialsView : UserControl, Contracts.MaterialsViewContract
	{
		Contracts.MaterialsPresenterContract Presenter { get; set; }

		public MaterialsEnum[] Maze01Materials
		{
			set { }
		}
		public MaterialsEnum[] Maze02Materials
		{
			set { }
		}

		public MaterialsView()
		{
			InitializeComponent();
		}

		public void Init(ConfigurationSettings settings)
		{
			this.Presenter = new MaterialsPresenter(settings);
			this.Presenter.View = this;
			this.Presenter.Init();
		}

		public void SetMaterial(MazesEnum maze, int materialIndex, MaterialsEnum material)
		{
			throw new NotImplementedException();
		}

		private void mazeVisualizer_OnMazeClicked(object sender, int selectedIndex)
		{
			Presenter.SelectedIndex = selectedIndex;
		}
	}
}
