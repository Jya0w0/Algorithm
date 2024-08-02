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

            int minPrice = 0;
            if (n >= 6)
            {
                if (n % 6 == 0) minPrice = Math.Min((n / 6) * minSetPrice, Math.Min(n * minOnePrice, (n / 6) * minSetPrice + (n % 6) * minOnePrice));
                else minPrice = Math.Min((n / 6 + 1) * minSetPrice, Math.Min(n * minOnePrice, (n / 6) * minSetPrice + (n % 6) * minOnePrice));
            }
            else minPrice = Math.Min(n * minOnePrice, minSetPrice);
            Console.WriteLine(minPrice);
        }
    }
}