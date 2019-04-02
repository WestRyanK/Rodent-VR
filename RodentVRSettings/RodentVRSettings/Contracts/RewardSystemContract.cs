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
		void SetMaterials(MaterialsEnum[] materials);

		void SetRewardTriggerIsEnabled(bool isEnabled);

		void SetRewardTriggerDuration(float duration);

		void SetRewardTriggerReward(int reward);

		int SelectedIndex { set; }

		MazesEnum CurrentMaze { set; }

		void Init(ConfigurationSettings settings);

	}

	public interface RewardSystemPresenterContract
	{
		Contracts.RewardSystemViewContract View { set; }
		
		bool CurrentRewardTriggerIsEnabled { get; set; }

		float CurrentRewardTriggerDuration { get; set; }

		int CurrentRewardTriggerReward { get; set; }

		int SelectedIndex { get; set; }

		void Init(ConfigurationSettings settings = null);

		bool SelectedIndexInRange(int value);
	}
}
