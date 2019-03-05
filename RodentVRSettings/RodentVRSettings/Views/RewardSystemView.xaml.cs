using RodentVRSettings.Models.Configuration;
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
	/// Interaction logic for RewardSystemView.xaml
	/// </summary>
	public partial class RewardSystemView : UserControl, Contracts.RewardSystemViewContract
	{
		Contracts.RewardSystemPresenterContract Presenter { get; set; }

		public RewardSystemView()
		{
			InitializeComponent();
		}

		public void Init(ConfigurationSettings settings)
		{
			this.Presenter = new RewardSystemPresenter(settings);
			this.Presenter.View = this;
			this.Presenter.Init();
		}

		#region Maze01RewardTriggers Property

		public List<RewardTrigger> Maze01RewardTriggers
		{
			set
			{
				// TODO: Set up setting this!
			}
		}
		#endregion

		#region Maze02RewardTriggers Property

		public List<RewardTrigger> Maze02RewardTriggers
		{
			set
			{
				// TODO: Set up setting this!
			}
		}
		#endregion
	}
}
