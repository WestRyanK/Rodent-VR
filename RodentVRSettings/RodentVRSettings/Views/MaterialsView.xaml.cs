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
				//this.ddMazeMaterial.Items.Add(new MaterialItem(material));
				this.ddMazeMaterial.Items.Add(material);
			}
		}

		public void SetMaterial(MazesEnum maze, int materialIndex, MaterialsEnum material)
		{
			throw new NotImplementedException();
		}

		private void mazeVisualizer_OnMazeClicked(object sender, int selectedIndex)
		{
			Presenter.SelectedIndex = selectedIndex;
		}

		public int SelectedIndex
		{
			set
			{
				this.ddMazeMaterial.SelectedItem = Presenter.CurrentMaterial;
			}
		}


		class MaterialItem
		{
			#region MaterialName Property
			private string materialName;

			public string MaterialName
			{
				get { return materialName; }
				private set { materialName = value; }
			}
			#endregion

			#region MaterialImage Property
			private BitmapImage materialImage;

			public BitmapImage MaterialImage
			{
				get { return materialImage; }
				private set { materialImage = value; }
			}
			#endregion

			#region Material Property
			private MaterialsEnum material;

			public MaterialsEnum Material
			{
				get { return material; }
				private set { material = value; }
			}
			#endregion

			public MaterialItem(MaterialsEnum material)
			{
				this.Material = material;
				this.MaterialName = this.Material.ToString();
				this.MaterialImage = this.Material.ToBitmapImageResource();
			}
		}
	}


}
