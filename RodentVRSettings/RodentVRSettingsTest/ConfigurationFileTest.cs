using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using RodentVRSettings.Models.Configuration;

namespace RodentVRSettingsTest
{
	[TestClass]
	public class ConfigurationFileTest
	{
		private const string TEST_FILENAME = "test.ini";

		private void AddConfigEntry(PrivateObject config, string setting, object value)
		{
			config.Invoke("AddConfigurationEntry", setting, value);
		}

		[TestMethod]
		public void TestGetConfigurationStrings()
		{
			PrivateObject config = new PrivateObject(new ConfigurationFile());
			AddConfigEntry(config, "string", "valueA");
			AddConfigEntry(config, "integer", 25);
			AddConfigEntry(config, "float", 12.1234f);
			AddConfigEntry(config, "booleanT", true);
			AddConfigEntry(config, "booleanF", false);
			AddConfigEntry(config, "booleanF", true);

			var multiEntry = new MultiEntry("multi");
			multiEntry.AddConfigurationEntry("A", "multiValueA");
			multiEntry.AddConfigurationEntry("B", 18);
			multiEntry.AddConfigurationEntry("C", false);

			config.Invoke("AddConfigurationEntry", multiEntry);


			string[] configStrings = (string[])config.Invoke("GetConfigurationStrings");
			// var configStrings = config.GetConfigurationStrings();
			string[] correctValues = {
				"string=valueA", // Test string
				"integer=25", // Test integer number
				"float=12.1234", // Test float number
				"booleanT=True", // Test positive boolean
				"booleanF=False", // Test negative boolean
				"booleanF=True", // Testing two entries with same name
				"multi=(A=multiValueA, B=18, C=False)" // Test a multiEntry
			};
			for (int i = 0; i < correctValues.Length; i++)
			{
				Assert.AreEqual(correctValues[i], configStrings[i], $"string {i} is wrong");
			}

			string correctString = string.Join(Environment.NewLine, correctValues);
			Assert.AreEqual(correctString, config.Target.ToString());

		}

		[TestMethod]
		public void TestIsMultiEntry()
		{
			var IsA = "hello=(";
			var NotA = "test=hello(";
			var NotB = "#test=hello(";
			Assert.AreEqual(true, MultiEntry.IsMultiEntry(IsA));
			Assert.AreEqual(false, MultiEntry.IsMultiEntry(NotA));
			Assert.AreEqual(false, MultiEntry.IsMultiEntry(NotB));
		}

		[TestMethod]
		public void TestParseConfigurationLines()
		{
			PrivateType privateType = new PrivateType(typeof(ConfigurationFile));
			string[] lines = new string[] {
				"string=valueA",
				"stringSpaced=here is a separated string",
				"integer1=1",
				"integer0=0",
				"integer14=14",
				"multi=(A=multiValueA, B=(B1=18, B2=hello world, B3=True), C=False)",
				"float10=10.0",
				"float14=14.5",
				"booleanT=True",
				"booleanF=False"};
			Type[] paramTypes = new Type[] { typeof(string[]) };
			object[] methodParams = new object[] { lines };

			MultiEntry output = (MultiEntry)privateType.InvokeStatic("ParseConfigurationLines", paramTypes, methodParams);

			Assert.AreEqual("Root", output.EntryName);

			Assert.AreEqual("string", output.Entries[0].EntryName);
			Assert.AreEqual("valueA", output.Entries[0].EntryValue);

			Assert.AreEqual("stringSpaced", output.Entries[1].EntryName);
			Assert.AreEqual("here is a separated string", output.Entries[1].EntryValue);

			Assert.AreEqual("integer1", output.Entries[2].EntryName);
			Assert.IsInstanceOfType(output.Entries[2].EntryValue, typeof(int));
			Assert.AreEqual(1, output.Entries[2].EntryValue);

			Assert.AreEqual("integer0", output.Entries[3].EntryName);
			Assert.IsInstanceOfType(output.Entries[3].EntryValue, typeof(int));
			Assert.AreEqual(0, output.Entries[3].EntryValue);

			Assert.AreEqual("integer14", output.Entries[4].EntryName);
			Assert.IsInstanceOfType(output.Entries[4].EntryValue, typeof(int));
			Assert.AreEqual(14, output.Entries[4].EntryValue);

			Assert.AreEqual("float10", output.Entries[6].EntryName);
			Assert.IsInstanceOfType(output.Entries[6].EntryValue, typeof(float));
			Assert.AreEqual(10.0f, output.Entries[6].EntryValue);
			
			Assert.AreEqual("float14", output.Entries[7].EntryName);
			Assert.IsInstanceOfType(output.Entries[7].EntryValue, typeof(float));
			Assert.AreEqual(14.5f, output.Entries[7].EntryValue);

			Assert.AreEqual("booleanT", output.Entries[8].EntryName);
			Assert.IsInstanceOfType(output.Entries[8].EntryValue, typeof(bool));
			Assert.AreEqual(true, output.Entries[8].EntryValue);

			Assert.AreEqual("booleanF", output.Entries[9].EntryName);
			Assert.IsInstanceOfType(output.Entries[9].EntryValue, typeof(bool));
			Assert.AreEqual(false, output.Entries[9].EntryValue);





			Assert.AreEqual("multi", output.Entries[5].EntryName);
			Assert.IsInstanceOfType(output.Entries[5], typeof(MultiEntry));
			var multi = (MultiEntry)output.Entries[5];

			Assert.AreEqual("A", multi.Entries[0].EntryName);
			Assert.AreEqual("multiValueA", multi.Entries[0].EntryValue);

			Assert.AreEqual("B", multi.Entries[1].EntryName);
			Assert.IsInstanceOfType(multi.Entries[1], typeof(MultiEntry));
			var multiB = (MultiEntry)multi.Entries[1];
			Assert.AreEqual("B1", multiB.Entries[0].EntryName);
			Assert.AreEqual(18, multiB.Entries[0].EntryValue);
			Assert.AreEqual("B2", multiB.Entries[1].EntryName);
			Assert.AreEqual("hello world", multiB.Entries[1].EntryValue);
			Assert.AreEqual("B3", multiB.Entries[2].EntryName);
			Assert.AreEqual(true, multiB.Entries[2].EntryValue);

			Assert.AreEqual("C", multi.Entries[2].EntryName);
			Assert.AreEqual(false, multi.Entries[2].EntryValue);
		}

		[TestMethod]
		public void TestRoundTripOfConfig()
		{
			PrivateType privateType = new PrivateType(typeof(ConfigurationFile));
			string[] lines = new string[] {
				"string=valueA",
				"stringSpaced=here is a separated string",
				"integer1=1",
				"integer0=0",
				"integer14=14",
				"multi=(A=multiValueA, B=(B1=18, B2=hello world, B3=True), C=False)",
				"float10=10.0",
				"float14=14.5",
				"booleanT=True",
				"booleanF=False"};
			Type[] paramTypes = new Type[] { typeof(string[]) };
			object[] methodParams = new object[] { lines };

			MultiEntry output1 = (MultiEntry)privateType.InvokeStatic("ParseConfigurationLines", paramTypes, methodParams);

			var output2 = output1.ToString().Split(new[] { Environment.NewLine }, StringSplitOptions.None);
			Assert.AreEqual(lines.Length, output2.Length);
			for (int i = 0; i < output2.Length; i++)
			{
				Assert.AreEqual(lines[i], output2[i]);
			}
		}

		[TestMethod]
		public void TestRoundTripSave()
		{
			ConfigurationFile file = new ConfigurationFile();
			file.AddConfigurationEntry("string", "i am a string");
			file.AddConfigurationEntry("bool", true);
			file.AddConfigurationEntry("float", 12.345f);
			file.AddConfigurationEntry("int", 40);
			file.AddConfigurationEntry("float", 60.0f);
			file.SaveFile(TEST_FILENAME);

			var file2 = ConfigurationFile.Read(TEST_FILENAME);

			Assert.AreEqual(file.Entries.Count, file2.Entries.Count);
			for (int i = 0; i < file.Entries.Count; i++)
			{
				Assert.AreEqual(file.Entries[i].EntryValue, file2.Entries[i].EntryValue);
			}
		}
	}
}
