using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace ConsoleApp1
{
    class Color
    {
        private int red;
        private int green;
        private int blue;
        public int Red
        {
            get { return red; }
            set { red = NormalizeColorValue(value); }
        }
        public int Green
        {
            get { return red; }
            set { green = NormalizeColorValue(value); }
        }
        public int Blue
        {
            get { return red; }
            set { blue = NormalizeColorValue(value); }
        }
        public Color() { }
        public Color(int red, int green, int blue)
        {
            Red = red;
            Green = green;
            Blue = blue;
        }
        private int NormalizeColorValue(int colorValue)
        {
            if (colorValue > 255)
            {
                return 255;
            }
            if (colorValue < 0)
            {
                return 0;
            }
            return colorValue;
        }
        public void DisplayColor()
        {
            Console.WriteLine($"{red}, {green}, {blue}");
        }
        class Program
        {
            static void Main(string[] args)
            {
                Color yellow = new Color(300, 300, 0);
                yellow.DisplayColor();
                Color pink = new Color();
                pink.red = 255;
                pink.green = -20;
                pink.blue = 147;
                Console.ReadKey(true);
            }
        }
    }
}