using System;
using System.Collections;
using System.Collections.Generic;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            int n = int.Parse(s[0]);
            int m = int.Parse(s[1]);

            int minSetPrice = 1000;
            int minOnePrice = 1000;
            for (int i = 0; i < m; i++)
            {
                string[] input = Console.ReadLine().Split();
                int set = int.Parse(input[0]);
                int one = int.Parse(input[1]);
                if (set < minSetPrice) minSetPrice = set;
                if (one < minOnePrice) minOnePrice = one;
            }

            int minPrice = minPrice = Math.Min(minSetPrice * (n / 6) + Math.Min(minSetPrice, minOnePrice * (n % 6)), minOnePrice * n);
            Console.WriteLine(minPrice);
        }
    }
}