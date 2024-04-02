using System;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            StringBuilder s = new StringBuilder();

            for(int j = 0; j < n; j++)
            {
                for (int i = 0; i < n; i++)
                {
                    s.Append(i < n - j - 1 ? " " : "*");
                }
                s.Append("\n");
            }
            Console.WriteLine(s);
        }
    }
}