using RodentVRSettings.Models.Configuration;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Media.Imaging;

namespace RodentVRSettings.Converters
{
	public static class ResourceLoader
	{
		public static BitmapImage ToBitmapImageResource(this string bitmapResourcePath)
		{
			BitmapImage img = new BitmapImage();
			img.BeginInit();
			img.UriSource = new Uri($"pack://application:,,/Resources/{bitmapResourcePath}.png");
			img.EndInit();
			return img;
		}

		public static BitmapImage ToBitmapImageResource(this MaterialsEnum material)
		{
			return material.ToString().ToBitmapImageResource();
		}
	}
}
