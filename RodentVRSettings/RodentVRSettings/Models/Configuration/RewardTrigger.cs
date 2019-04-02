using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Models.Configuration
{
    public class RewardTrigger
    {
		private const string DURATION_NAME = "Duration";
		private const string REWARD_NAME = "Reward";
		private const string ISENABLED_NAME = "IsEnabled";
		#region Properties
		#region IsEnabled Property
		private bool isEnabled;

		public bool IsEnabled
		{
			get { return isEnabled; }
			set { isEnabled = value; }
		}
		#endregion


		#region Reward Property
		private int reward;

		public int Reward
		{
			get { return reward; }
			set { reward = value; }
		}
		#endregion

		#region Duration Property
		private float duration;

		public float Duration
		{
			get { return duration; }
			set { duration = value; }
		}
		#endregion
		#endregion

		public RewardTrigger()
		{
		}

		public RewardTrigger(bool isEnabled, int reward, float duration)
		{
			this.isEnabled = isEnabled;
			this.reward = reward;
			this.duration = duration;
		}

		public static RewardTrigger MultiEntryToRewardTrigger(MultiEntry multiEntry)
		{
			bool isEnabled = (bool)multiEntry.GetFirstEntryByName(ISENABLED_NAME).EntryValue;
			int reward = (int)multiEntry.GetFirstEntryByName(REWARD_NAME).EntryValue;
			float duration = (float)multiEntry.GetFirstEntryByName(DURATION_NAME).EntryValue;
			RewardTrigger trigger = new RewardTrigger(isEnabled, reward, duration);

			return trigger;
		}

		public static MultiEntry RewardTriggerToMultiEntry(string name, RewardTrigger trigger)
		{
			MultiEntry multiEntry = new MultiEntry(name);
			multiEntry.AddConfigurationEntry(ISENABLED_NAME, trigger.IsEnabled);
			multiEntry.AddConfigurationEntry(REWARD_NAME, trigger.Reward);
			multiEntry.AddConfigurationEntry(DURATION_NAME, trigger.Duration);

			return multiEntry;
		}

		public override bool Equals(object obj)
		{
			var other = obj as RewardTrigger;
			if (other == null)
				return false;

			return (this.IsEnabled == other.IsEnabled)
				&& (this.Reward == other.Reward)
				&& (this.Duration == other.Duration);
		}
	}
}
