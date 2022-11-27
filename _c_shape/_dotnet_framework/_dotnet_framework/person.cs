using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _dotnet_framework
{
    public class Person
    {
        public String Name;
        public Person() { Name = "Trieu John"; }
        public Person(String name) { Name = name; }
        public void Introduce()
        {
            Console.WriteLine("Hello World!!! I am " + Name);
        }
    }
}
