using RodentVRSettings.Models.Configuration;
using RodentVRSettings.Presenters;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace RodentVRSettings.Views
{
	/// <summary>
	/// Interaction logic for MouseInputView.xaml
	/// </summary>
	public partial class InitialMazeView : UserControl, Contracts.InitialMazeViewContract
	{
		Contracts.InitialMazePresenterContract Presenter { get; set; }

		public InitialMazeView()
		{
			InitializeComponent();
		}

		public void Init(ConfigurationSettings settings)
		{
			InitMazesDropDown();

			this.Presenter = new InitialMazePresenter(settings);
			this.Presenter.View = this;
			this.Presenter.Init();
		}

		private void InitMazesDropDown()
		{
			this.ddInitialMaze.Items.Clear();
			var mazes = Enum.GetValues(typeof(MazesEnum));
			foreach (MazesEnum maze in mazes)
			{
				this.ddInitialMaze.Items.Add(maze);
			}
		}


		#region Initial Maze
		private void ddInitialMaze_SelectionChanged(object sender, SelectionChangedEventArgs e)
		{
			var selectedMaze = ddInitialMaze.SelectedItem as MazesEnum?;
			if (selectedMaze != null)
				Presenter.InitialMaze = (MazesEnum)selectedMaze;
		}

		public MazesEnum InitialMaze
		{
			set
			{
				ddInitialMaze.SelectedItem = value;
			}
		}
		#endregion

	}
}
