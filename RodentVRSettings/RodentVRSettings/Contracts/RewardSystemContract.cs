using RodentVRSettings.Models.Configuration;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Contracts
{
	public interface RewardSystemViewContract
	{
		void SetRewardTrigger(MazesEnum maze, int triggerIndex, RewardTrigger trigger);

		void SetMazeMaterials(MaterialsEnum[] maze01Materials, MaterialsEnum[] maze02Materials);

		void Init(ConfigurationSettings settings);
	}

	public interface RewardSystemPresenterContract
	{
		Contracts.RewardSystemViewContract View { set; }

		void SetRewardTrigger(MazesEnum maze, int triggerIndex, RewardTrigger trigger);

		void Init();
	}
}
