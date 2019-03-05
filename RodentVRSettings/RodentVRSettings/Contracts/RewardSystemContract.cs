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
	}

	public interface RewardSystemPresenterContract
	{
		Contracts.RewardSystemViewContract View { set; }

		void SetRewardTrigger(MazesEnum maze, int triggerIndex, RewardTrigger trigger);

		void Init();
	}
}
