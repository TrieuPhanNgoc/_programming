using _dotnet_framework.Api;
using _dotnet_framework.Lib;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Security.Policy;

namespace _dotnet_framework
{ 
    public class Program
    {
        static void Main(string[] args)
        {
            byte _number = 255;
                
            _number += 3;

            Console.WriteLine(_number);

            int value = 1;
            // byte get = value; // Error of casting
            byte get = (byte) value;

            Console.WriteLine(get);


            try
            {
                var number = "true";
                bool b = Convert.ToBoolean(number);
                Console.WriteLine(b);
            }
            catch 
            {
                Console.WriteLine("Could not convert to bool!");
            }

            //Console.WriteLine("Total Value: " + Calculator.Adding(5, 4));

            Person person = new Person();
            person.Name = "My John";
            person.Introduce();


            /*
             * Array
             */
            int[] numbers = new int[3] { 1, 5, 7 };
            Console.WriteLine(numbers[0]);
            Console.WriteLine(numbers[1]);
            Console.WriteLine(numbers[2]);


            // String when your variable is a path
            string _firstWay = "g:\\git";
            string _secondWay = @"g:\git";

            Console.WriteLine("This: " + _firstWay + " or this: " + _secondWay);
            //trieupn_api.validInput();
            
            Image image = new Image(5, 2);
            image.height = 2;
            image.width = 5;

            image.isPortrait();
    

            // Creating password

            var buffer = new char[10];
            var random = new Random();
            for (var i = 0; i < 10; i++) {
                buffer[i] = trieupn_api.get_random_char(random, 0, 26);
            }

            var password = new string(buffer);

            Console.WriteLine("My password: " + password);

            tpn_string m_string = new tpn_string();
            m_string.set_string(password);
            Console.WriteLine(m_string.get_string());
        }
    }
}