using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _dotnet_framework.Lib
{
    public class Image
    {
        private int _width;
        private int _height;
        public int width
        {
            get { return _width; }
            set { _width = value; }
        }

        public int height
        {
            get { return _height; }
            set { _height = value; }
        }

        public Image(int width, int height)
        {
            _width = width;
            _height = height;
        }

        public bool isPortrait()
        {
            if (width >= height)
            {
                Console.WriteLine("Portrait");
                return false;
            }
            Console.WriteLine("Landscape");
            return false;
        }
    }
}
