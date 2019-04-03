using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Data;
using System.Windows.Markup;

namespace RodentVRSettings.Converters
{
	class PufferAngleConverter : MarkupExtension, IValueConverter
	{
		const float FRONT_ANGLE = 90.0f;

		#region IValueConverter Implementation
		public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
		{
				double outputAngle;
			if (value is double && parameter is bool )
			{
				var angle = (double)value;
				var isStart = (bool)parameter;

				if (isStart == true)
					outputAngle = FRONT_ANGLE - angle;
				else
					outputAngle = FRONT_ANGLE + angle;
			}
			else
			{
				outputAngle = 0.0f;
			}

			return outputAngle;
		}

		public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			return null;
		}
		#endregion

		#region MarkupExtension Implementation
		public override object ProvideValue(IServiceProvider serviceProvider)
		{
			return this;
		} 
		#endregion
	}
}
