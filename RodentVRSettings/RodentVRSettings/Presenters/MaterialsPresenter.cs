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
			get { return selectedIndex; }
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
			this.Settings.PropertyChanged += this.Settings_PropertyChanged;
		}

		private void Settings_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
		{
			if (e.PropertyName == nameof(this.Settings.InitialMaze))
			{
				Init();
			}
		}

		public void Init(ConfigurationSettings settings = null)
		{
			if (settings != null)
				this.Settings = settings;

			View.CurrentMaze = this.Settings.InitialMaze;

			var materials = this.Settings.GetMaterials(this.Settings.InitialMaze);
			View.SetMaterials(materials);
		}

		public bool SelectedIndexInRange(int value)
		{
			return (value >= 0 && value < this.Settings.GetMaterials(this.Settings.InitialMaze).Length);
		}

		#region CurrentMaterial Property
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
					if (this.Settings.GetMaterials(this.Settings.InitialMaze)[this.SelectedIndex] != value)
					{
						this.Settings.SetMaterial(this.Settings.InitialMaze, this.SelectedIndex, value);
						View.SetMaterial(this.SelectedIndex, value);
					}
				}
			}
		}
		#endregion
	}
}
