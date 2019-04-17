using RodentVRSettings.Converters;
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

		public MaterialsView()
		{
			InitializeComponent();
		}

		public void Init(ConfigurationSettings settings)
		{
			InitMaterialsDropDown();

			this.Presenter = new MaterialsPresenter(settings);
			this.Presenter.View = this;
			this.Presenter.Init();
		}

		private void InitMaterialsDropDown()
		{
			this.ddMazeMaterial.Items.Clear();
			var materials = Enum.GetValues(typeof(MaterialsEnum));
			foreach (MaterialsEnum material in materials)
			{
				this.ddMazeMaterial.Items.Add(material);
			}
		}

		public void SetMaterial(int materialIndex, MaterialsEnum material)
		{
			this.mazeVisualizer.SetMaterial(materialIndex, material);
		}

		public void SetMaterials(MaterialsEnum[] materials)
		{
			this.mazeVisualizer.SetMaterials(materials);
		}

		private void mazeVisualizer_OnMazeClicked(object sender, int selectedIndex)
		{
			if (Presenter != null)
				Presenter.SelectedIndex = selectedIndex;
		}

		public int SelectedIndex
		{
			set
			{
				bool isValidSelection = Presenter.SelectedIndexInRange(value);

				this.ddMazeMaterial.IsEnabled =
					this.ddMazeMaterialLabel.IsEnabled = isValidSelection;

				if (isValidSelection)
				{
					this.ddMazeMaterial.SelectedItem = Presenter.CurrentMaterial;
				}
				else
				{
					this.ddMazeMaterial.SelectedItem = null;
				}
			}
		}

		private void ddMazeMaterial_SelectionChanged(object sender, SelectionChangedEventArgs e)
		{
			MaterialsEnum? selectedMaterial = ddMazeMaterial.SelectedItem as MaterialsEnum?;
			if (selectedMaterial != null)
			{
				Presenter.CurrentMaterial = (MaterialsEnum)selectedMaterial;
			}
		}

		public MazesEnum CurrentMaze
		{
			set
			{
				this.mazeVisualizer.Maze = value;
			}
		}
	}
}
