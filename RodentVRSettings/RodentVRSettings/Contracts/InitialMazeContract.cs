using RodentVRSettings.Models.Configuration;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Contracts
{
	public interface InitialMazeViewContract
	{
		MazesEnum InitialMaze { set; }

		void Init(ConfigurationSettings settings);
	}

	public interface InitialMazePresenterContract
	{
		Contracts.InitialMazeViewContract View { set; }

		MazesEnum InitialMaze { set; }

		void Init(ConfigurationSettings settings = null);
	}
}
