using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using RodentVRSettings.Models.Configuration;

namespace RodentVRSettingsTest
{
	[TestClass]
	public class ConfigurationSettingsTest
	{
		[TestMethod]
		public void TestRoundTrip()
		{
			var settings = new ConfigurationSettings();
			settings.AirPufferFrontAngle = 3.33333f;
			settings.AirPuffLeftDeviceName = "AirPufferLeft";
			settings.AirPuffRightDeviceName = "AirPufferRight";
			settings.BehaviorRecordingFileName = "BehaviorFile";
			settings.InitialMaze = "firstMaze";
			var materials = Enum.GetValues(typeof(MaterialsEnum));
			for (int i = 0; i < settings.Maze01Materials.Length; i++)
			{
				settings.Maze01Materials[i] = (MaterialsEnum)materials.GetValue(i);
			}
			settings.Maze01Triggers[0] = new RewardTrigger(false, 7, 12.345f);
			settings.Maze01Triggers[1] = new RewardTrigger(true, 5, 23.456f);
			settings.Maze01Triggers[2] = new RewardTrigger(false, 2, 34.5678f);
			for (int i = 0; i < settings.Maze02Materials.Length; i++)
			{
				settings.Maze02Materials[i] = (MaterialsEnum)materials.GetValue(i + settings.Maze01Materials.Length);
			}
			settings.Maze02Triggers[0] = new RewardTrigger(true, 0, 5.555f);
			settings.Maze02Triggers[1] = new RewardTrigger(false, 1, 6.666f);
			settings.Maze02Triggers[2] = new RewardTrigger(true, 4, 7.0f);
			settings.MouseADeviceName = "mouseAName";
			settings.MouseBDeviceName = "mouseBName";
			settings.MouseAMultiplier = 1.111111f;
			settings.MouseBMultiplier = 2.222222f;
			settings.Reward1DeviceName = "reward1";
			settings.Reward2DeviceName = "reward2";

			var file = ConfigurationSettings.ToConfigurationFile(settings);
			var settings2 = ConfigurationSettings.FromConfigurationFile(file);

			Assert.AreEqual(settings.AirPufferFrontAngle, settings2.AirPufferFrontAngle);
			Assert.AreEqual(settings.AirPuffLeftDeviceName, settings2.AirPuffLeftDeviceName);
			Assert.AreEqual(settings.AirPuffRightDeviceName, settings2.AirPuffRightDeviceName);
			Assert.AreEqual(settings.BehaviorRecordingFileName, settings2.BehaviorRecordingFileName);
			Assert.AreEqual(settings.InitialMaze, settings2.InitialMaze);
			for (int i = 0; i < settings.Maze01Materials.Length; i++)
			{
				Assert.AreEqual(settings.Maze01Materials[i], settings2.Maze01Materials[i]);
			}

			for (int i = 0; i < settings.Maze02Materials.Length; i++)
			{
				Assert.AreEqual(settings.Maze02Materials[i], settings2.Maze02Materials[i]);
			}

			for (int i = 0; i < settings.Maze01Triggers.Length; i++)
			{
				Assert.AreEqual(settings.Maze01Triggers[i].Duration, settings2.Maze01Triggers[i].Duration);
				Assert.AreEqual(settings.Maze01Triggers[i].IsEnabled, settings2.Maze01Triggers[i].IsEnabled);
				Assert.AreEqual(settings.Maze01Triggers[i].Reward, settings2.Maze01Triggers[i].Reward);

				Assert.AreEqual(settings.Maze02Triggers[i].Duration, settings2.Maze02Triggers[i].Duration);
				Assert.AreEqual(settings.Maze02Triggers[i].IsEnabled, settings2.Maze02Triggers[i].IsEnabled);
				Assert.AreEqual(settings.Maze02Triggers[i].Reward, settings2.Maze02Triggers[i].Reward);
			}

			Assert.AreEqual(settings.MouseADeviceName, settings2.MouseADeviceName);
			Assert.AreEqual(settings.MouseAMultiplier, settings2.MouseAMultiplier);
			Assert.AreEqual(settings.MouseBDeviceName, settings2.MouseBDeviceName);
			Assert.AreEqual(settings.MouseBMultiplier, settings2.MouseBMultiplier);
			Assert.AreEqual(settings.Reward1DeviceName, settings2.Reward1DeviceName);
			Assert.AreEqual(settings.Reward2DeviceName, settings2.Reward2DeviceName);
		}
	}
}
