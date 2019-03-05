using RodentVRSettings.Contracts;
using RodentVRSettings.Models.Configuration;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Presenters
{
	public class MaterialsPresenter : Contracts.MaterialsPresenterContract
	{
		public MaterialsViewContract View { get; set; }

		#region SelectedIndex Property
		private int selectedIndex;

		public int SelectedIndex
		{
			private get { return selectedIndex; }
			set
			{
				if (SelectedIndex != value)
				{
					selectedIndex = value;
					View.SelectedIndex = value;
				}
			}
		}
		#endregion

		#region Settings Property
		private ConfigurationSettings settings;

		public ConfigurationSettings Settings
		{
			get { return settings; }
			set { settings = value; }
		}
		#endregion

		public MaterialsPresenter(ConfigurationSettings settings)
		{
			this.Settings = settings;
		}

		public void Init()
		{
			View.Maze01Materials = this.Settings.Maze01Materials;
			View.Maze02Materials = this.Settings.Maze02Materials;
		}

		public MaterialsEnum CurrentMaterial
		{
			get
			{
				if (this.SelectedIndex < 0)
					return MaterialsEnum.gray;
				var materials = this.Settings.GetMaterials(this.Settings.InitialMaze);
				return materials[this.SelectedIndex];
			}
			set
			{
				if (this.SelectedIndex >= 0)
				{
					var materials = this.Settings.GetMaterials(this.Settings.InitialMaze);
					materials[this.SelectedIndex] = value;
				}
			}
		}
	}
}
