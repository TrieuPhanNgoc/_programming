using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _dotnet_framework.Math
{
    public class Calculator
    {
        public static Int32 Adding(Int32 a, Int32 b)
        {
            return a + b;
        }

        public static bool isLarger(Int32 a, Int32 b)
        {
            return a < b;
        }

        public bool isExistIn(Int32[] a, Int32 b)
        {
            for (var i = 0; i < a.Length; ++i)
            {
                if (a[i] == b) return true;
            }

            return false;
        }

        public Int32 maxNum(Int32 a, Int32 b)
        {
            return (a > b) ? a : b;
        }

        public Int32 minNum(Int32 a, Int32 b)
        {
            return (a < b) ? a : b;
        }
    }
}
