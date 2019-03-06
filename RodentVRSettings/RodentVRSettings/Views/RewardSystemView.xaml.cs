using RodentVRSettings.Contracts;
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

		public void SetRewardTrigger(MazesEnum maze, int triggerIndex, RewardTrigger trigger)
		{
			throw new NotImplementedException();
		}

		void RewardSystemViewContract.SetMazeMaterials(MaterialsEnum[] maze01Materials, MaterialsEnum[] maze02Materials)
		{
			throw new NotImplementedException();
		}
	}
}
