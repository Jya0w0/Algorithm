using System;

namespace CodingTest
{
    internal class Program
    {
        static long Factorial(int n)
        {
            if (n == 0 || n == 1)
            {
                return 1;
            }
            return n * Factorial(n - 1);
        }
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            Console.WriteLine(Factorial(n));
        }
    }
}