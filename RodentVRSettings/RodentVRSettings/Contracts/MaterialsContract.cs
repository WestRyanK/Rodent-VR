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
		void SetMaterial(MazesEnum maze, int materialIndex, MaterialsEnum material);

		MaterialsEnum[] Maze01Materials { set; }

		MaterialsEnum[] Maze02Materials { set; }

		void Init(ConfigurationSettings settings);
	}

	public interface MaterialsPresenterContract
	{
		Contracts.MaterialsViewContract View { set; }

		void SetMaterial(MaterialsEnum material);

		int SelectedIndex { set; }

		void Init();
	}
}
