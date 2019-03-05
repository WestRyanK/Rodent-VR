using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RodentVRSettings.Models.Configuration
{
	public class ConfigurationSettings
	{

		#region Properties
		#region Device Paths
		#region AirPuffLeftDeviceName Property
		private string airPuffLeftDeviceName;

		public string AirPuffLeftDeviceName
		{
			get { return airPuffLeftDeviceName; }
			set { airPuffLeftDeviceName = value; }
		}
		#endregion

		#region AirPuffRightDeviceName Property
		private string airPuffRightDeviceName;

		public string AirPuffRightDeviceName
		{
			get { return airPuffRightDeviceName; }
			set { airPuffRightDeviceName = value; }
		}
		#endregion

		#region Reward1DeviceName Property
		private string reward1DeviceName;

		public string Reward1DeviceName
		{
			get { return reward1DeviceName; }
			set { reward1DeviceName = value; }
		}
		#endregion

		#region Reward2DeviceName Property
		private string reward2DeviceName;

		public string Reward2DeviceName
		{
			get { return reward2DeviceName; }
			set { reward2DeviceName = value; }
		}
		#endregion
		#endregion

		#region Air Puffer Configuration
		#region AirPufferFrontAngle Property
		private float airPufferFrontAngle;

		public float AirPufferFrontAngle
		{
			get { return airPufferFrontAngle; }
			set { airPufferFrontAngle = value; }
		}
		#endregion
		#endregion

		#region Reward Trigger Configuration
		#region Maze01Triggers Property
		private RewardTrigger[] maze01Triggers;

		public RewardTrigger[] Maze01Triggers
		{
			get { return maze01Triggers; }
			set { maze01Triggers = value; }
		}
		#endregion

		#region Maze02Triggers Property
		private RewardTrigger[] maze02Triggers;

		public RewardTrigger[] Maze02Triggers
		{
			get { return maze02Triggers; }
			set { maze02Triggers = value; }
		}
		#endregion
		#endregion

		#region Mouse Configuration
		#region MouseADeviceName Property
		private string mouseADeviceName;

		public string MouseADeviceName
		{
			get { return mouseADeviceName; }
			set { mouseADeviceName = value; }
		}
		#endregion

		#region MouseBDeviceName Property
		private string mouseBDeviceName;

		public string MouseBDeviceName
		{
			get { return mouseBDeviceName; }
			set { mouseBDeviceName = value; }
		}
		#endregion

		#region MouseAMultiplier Property
		private float mouseAMultiplier;

		public float MouseAMultiplier
		{
			get { return mouseAMultiplier; }
			set { mouseAMultiplier = value; }
		}
		#endregion

		#region MouseBMultiplier Property
		private float mouseBMultiplier;

		public float MouseBMultiplier
		{
			get { return mouseBMultiplier; }
			set { mouseBMultiplier = value; }
		}
		#endregion
		#endregion

		#region BehaviorRecordingFileName Property
		private string behaviorRecordingFileName;

		public string BehaviorRecordingFileName
		{
			get { return behaviorRecordingFileName; }
			set { behaviorRecordingFileName = value; }
		}
		#endregion

		#region Initial Maze
		#region InitialMaze Property
		private MazesEnum initialMaze;

		public MazesEnum InitialMaze
		{
			get { return initialMaze; }
			set { initialMaze = value; }
		}
		#endregion
		#endregion

		#region Maze01Materials Property
		private MaterialsEnum[] maze01Materials;

		public MaterialsEnum[] Maze01Materials
		{
			get { return maze01Materials; }
			set { maze01Materials = value; }
		}
		#endregion

		#region Maze02Materials Property
		private MaterialsEnum[] maze02Materials;

		public MaterialsEnum[] Maze02Materials
		{
			get { return maze02Materials; }
			set { maze02Materials = value; }
		}
		#endregion
		#endregion

		private static readonly string[] settingsNames = {
			"AirPuffLeftDeviceName",
			"AirPuffRightDeviceName",
			"Reward1DeviceName",
			"Reward2DeviceName",
			"AirPufferFrontAngle",
			"Maze_01_Triggers",
			"Maze_02_Triggers",
			"MouseADeviceName",
			"MouseBDeviceName",
			"MouseAMultiplier",
			"MouseBMultiplier",
			"BehaviorRecordingFileName",
			"InitialMaze",
			"Maze_01_Materials",
			"Maze_02_Materials" };
		public const int MAZE_01_TRIGGER_COUNT = 3;
		public const int MAZE_02_TRIGGER_COUNT = 3;
		public const int MAZE_01_MATERIAL_COUNT = 7;
		public const int MAZE_02_MATERIAL_COUNT = 3;

		public ConfigurationSettings()
		{
			this.Reset();
		}

		public void Reset()
		{
			this.AirPuffLeftDeviceName = @"Dev1/port1/line0";
			this.AirPuffRightDeviceName = @"Dev1/port1/line1";
			this.Reward1DeviceName = @"Dev1/port1/line2";
			this.Reward2DeviceName = @"Dev1/port1/line3";
			this.AirPufferFrontAngle = 30.0f;
			this.Maze01Triggers = new RewardTrigger[] {
				 new RewardTrigger(false, 1, 1.0f),
				 new RewardTrigger(true, 1, 1.0f),
				 new RewardTrigger(true, 1, 2.0f) };
			this.Maze02Triggers = new RewardTrigger[] {
				 new RewardTrigger(false, 1, 1.0f),
				 new RewardTrigger(true, 1, 1.0f),
				 new RewardTrigger(true, 1, 2.0f) };
			this.MouseADeviceName = @"HID\VID_0461&PID_4D15\6&31D2D65F&0&0000";
			this.MouseBDeviceName = @"HID\VID_046D&PID_C016\6&D2A8B0A&0&0000";
			this.MouseAMultiplier = -0.05f;
			this.MouseBMultiplier = 0.025f;
			this.BehaviorRecordingFileName = @"C:\BehavioralRecording.txt";
			this.InitialMaze = MazesEnum.maze_01_level;
			this.Maze01Materials = new MaterialsEnum[] {
				MaterialsEnum.green,
				MaterialsEnum.cyan,
				MaterialsEnum.blue,
				MaterialsEnum.gray,
				MaterialsEnum.checkers_large,
				MaterialsEnum.dots_1,
				MaterialsEnum.stripes_small };
			this.Maze02Materials = new MaterialsEnum[] {
				MaterialsEnum.dots_1,
				MaterialsEnum.stripes_small,
				MaterialsEnum.checkers_large };
		}

		#region To ConfigurationFile
		public static ConfigurationFile ToConfigurationFile(ConfigurationSettings settings)
		{
			ConfigurationFile file = new ConfigurationFile();
			object[] values = new object[]
				{
					settings.AirPuffLeftDeviceName,
					settings.airPuffRightDeviceName,
					settings.Reward1DeviceName,
					settings.Reward2DeviceName,
					settings.AirPufferFrontAngle,
					settings.Maze01Triggers,
					settings.Maze02Triggers,
					settings.MouseADeviceName,
					settings.MouseBDeviceName,
					settings.MouseAMultiplier,
					settings.MouseBMultiplier,
					settings.BehaviorRecordingFileName,
					settings.InitialMaze,
					settings.Maze01Materials,
					settings.Maze02Materials };

			for (int i = 0; i < values.Length; i++)
			{
				AddEntry(file, settingsNames[i], (dynamic)values[i]);
			}

			return file;
		}

		private static void AddEntry(ConfigurationFile file, string name, RewardTrigger[] triggers)
		{
			foreach (var trigger in triggers)
			{
				var entry = RewardTrigger.RewardTriggerToMultiEntry(name, trigger);
				file.AddConfigurationEntry(entry);
			}
		}

		private static void AddEntry(ConfigurationFile file, string name, MaterialsEnum[] materials)
		{
			foreach (var material in materials)
			{
				var entry = new Entry(name, material.ToString());
				file.AddConfigurationEntry(entry);
			}
		}

		private static void AddEntry(ConfigurationFile file, string name, object value)
		{
			Entry entry;
			if (value is Enum)
				entry = new Entry(name, value.ToString());
			else
				entry = new Entry(name, value);

			file.AddConfigurationEntry(entry);
		}

		#endregion

		#region From ConfigurationFile
		public static ConfigurationSettings FromConfigurationFile(ConfigurationFile file)
		{
			ConfigurationSettings settings = new ConfigurationSettings();

			int i = 0;
			settings.AirPuffLeftDeviceName = (string)file.GetFirstEntryByName(settingsNames[i++]).EntryValue;
			settings.AirPuffRightDeviceName = (string)file.GetFirstEntryByName(settingsNames[i++]).EntryValue;
			settings.Reward1DeviceName = (string)file.GetFirstEntryByName(settingsNames[i++]).EntryValue;
			settings.Reward2DeviceName = (string)file.GetFirstEntryByName(settingsNames[i++]).EntryValue;
			settings.AirPufferFrontAngle = (float)file.GetFirstEntryByName(settingsNames[i++]).EntryValue;

			settings.Maze01Triggers = CreateTriggers(file.GetEntriesByName(settingsNames[i++]));
			settings.Maze02Triggers = CreateTriggers(file.GetEntriesByName(settingsNames[i++]));

			settings.MouseADeviceName = (string)file.GetFirstEntryByName(settingsNames[i++]).EntryValue;
			settings.MouseBDeviceName = (string)file.GetFirstEntryByName(settingsNames[i++]).EntryValue;
			settings.MouseAMultiplier = (float)file.GetFirstEntryByName(settingsNames[i++]).EntryValue;
			settings.MouseBMultiplier = (float)file.GetFirstEntryByName(settingsNames[i++]).EntryValue;
			settings.BehaviorRecordingFileName = (string)file.GetFirstEntryByName(settingsNames[i++]).EntryValue;
			settings.InitialMaze = (MazesEnum)Enum.Parse(typeof(MazesEnum), (string)file.GetFirstEntryByName(settingsNames[i++]).EntryValue);

			settings.Maze01Materials = CreateMaterials(file.GetEntriesByName(settingsNames[i++]));
			settings.Maze02Materials = CreateMaterials(file.GetEntriesByName(settingsNames[i++]));

			return settings;
		}

		private static MaterialsEnum[] CreateMaterials(List<Entry> materialEntries)
		{
			List<MaterialsEnum> materials = new List<MaterialsEnum>();
			foreach (var materialEntry in materialEntries)
			{
				var material = (MaterialsEnum)Enum.Parse(typeof(MaterialsEnum), (string)materialEntry.EntryValue);
				materials.Add(material);
			}
			return materials.ToArray();
		}

		private static RewardTrigger[] CreateTriggers(List<Entry> triggerEntries)
		{
			List<RewardTrigger> triggers = new List<RewardTrigger>();
			foreach (var triggerEntry in triggerEntries)
			{
				MultiEntry multiEntry = (MultiEntry)triggerEntry;
				var trigger = RewardTrigger.MultiEntryToRewardTrigger(multiEntry);
				triggers.Add(trigger);
			}
			return triggers.ToArray();
		}
		#endregion

		public RewardTrigger[] GetRewardTriggers(MazesEnum maze)
		{

			RewardTrigger[] triggers;
			switch (maze)
			{
				case MazesEnum.maze_01_level:
					triggers = this.Maze01Triggers;
					break;
				case MazesEnum.maze_02_level:
					triggers = this.Maze02Triggers;
					break;
				default:
					throw new Exception("update switch plz!");
			}
			return triggers;
		}
		
		public MaterialsEnum[] GetMaterials(MazesEnum maze)
		{

			MaterialsEnum[] materials;
			switch (maze)
			{
				case MazesEnum.maze_01_level:
					materials = this.Maze01Materials;
					break;
				case MazesEnum.maze_02_level:
					materials = this.Maze02Materials;
					break;
				default:
					throw new Exception("update switch plz!");
			}
			return materials;
		}
	}
}
