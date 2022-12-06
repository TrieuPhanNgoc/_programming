using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _dotnet_framework.Api
{
    public class tpn_string
    {

        protected string string_value;

        public tpn_string() { }

        public tpn_string(string value) 
        {
            string_value = value; 
        }

        public string get_string()
        {
            return string_value;
        }

        public void set_string(string value)
        {
            string_value = value; 
        }

        public string to_lower_string()
        {
            return string_value.ToLower();
        }

        public string to_upper_string()
        {
            return string_value.ToUpper();
        }

        public string trim_string()
        {
            return string_value.Trim();
        }

        public string get_sub_string(int index)
        {
            return string_value.Substring(index);
        }

        public string get_sub_string_with_len(int index, int length)
        {
            return string_value.Substring(index, length);
        }

        public bool is_string_null_or_empty()
        {
            return String.IsNullOrEmpty(string_value);
        }

        public bool is_string_null_or_whitespace()
        {
            return String.IsNullOrWhiteSpace(string_value);
        }

        public string[] split_string(char character)
        {
            return string_value.Split(character);
        }

        public int convert_to_int()
        {
            return int.Parse(string_value); // or Convert.ToInt32(string_value);
        }

        public string convert_to_strin(int number)
        {
            string_value = number.ToString();
            return string_value;    
        }
    }
}
