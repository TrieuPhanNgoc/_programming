using System;
using System.Collections.Generic;
using System.ComponentModel.Design;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace _dotnet_framework.Api
{
    internal class trieupn_api
    {
        public static void validInput()
        {
            while (true) { 
                Console.Write("Enter number: ");
                var read = Console.ReadLine();
                if (!String.IsNullOrEmpty(read))
                {
                    var integer_num = Convert.ToInt32(read);
                    if (integer_num < 0 || integer_num > 10)
                    {
                        Console.WriteLine("Invalide");
                        break;
                    }
                    else
                    {
                        Console.WriteLine("Valid");
                    }
                }
            }
        }

        public static int get_random_number(int min, int max)
        {
            var random = new Random();
            return random.Next(min, max);
        }

        public static char get_random_char(Random random, int min, int max)
        {
            var _char = (char)('a' + random.Next(min, max));
            return _char;
        }

        public static int count_divided_3_numbers(int min, int max)
        {
            int count = 0;
            for (int i = min; i <= max; i++)
            {
                if (i % 3 == 0)
                {
                    count++;
                }
            }
            return count;
        }

        
        public static long factorial_of_n(int n)
        {
            if (n == 1)
            {
                return 1;
            }

            return n * factorial_of_n(n - 1);
        }

        public static void guessing_game()
        {
            var random = new Random();
            var guess_num = random.Next(1, 10);
            var time_of_guess = 4;
            while (true)
            {
                var ans = Console.ReadLine();
                if (!String.IsNullOrEmpty(ans))
                {
                    int _ans = Convert.ToInt32(ans);
                    if (_ans == guess_num)
                    {
                        Console.WriteLine("Guessing right!");
                        break;
                    }
                    Console.WriteLine("Guessing right!");
                    time_of_guess--;

                    if (time_of_guess <= 0)
                    {
                        break;
                    }
                }
            }
        }



        public static void copy_file(string des, string src)
        {
            File.Copy(src, des);
        }

        public static void delete_path(string path)
        {
            File.Delete(path);
        }

        public static string reading_all_message_from_path(string path)
        {
            return File.ReadAllText(path);
        }


    }
}
