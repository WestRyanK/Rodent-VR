using RodentVRSettings.Models.Configuration;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Contracts
{
	public interface MaterialsViewContract
	{
		void SetMaterial(int materialIndex, MaterialsEnum material);

		int SelectedIndex { set; }

		MazesEnum CurrentMaze { set; }

		void Init(ConfigurationSettings settings);
	}

	public interface MaterialsPresenterContract
	{
		Contracts.MaterialsViewContract View { set; }

		MaterialsEnum CurrentMaterial { get; set; }

		int SelectedIndex { get; set; }

		void Init(ConfigurationSettings settings = null);

		bool SelectedIndexInRange(int value);
	}
}
