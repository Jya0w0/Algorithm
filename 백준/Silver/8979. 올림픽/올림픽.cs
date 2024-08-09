using System;
using System.Collections;
using System.Collections.Generic;

namespace CodingTest
{
    internal class Program
    {
        static int n;
        static int k;
        static int[] country;
        static int[] gold;
        static int[] silver;
        static int[] bronze;

        static int Rank()
        {
            int r = 0;
            int index = 0;
            for (int i = 0; i < n; i++)
            {
                if (country[i] == k)
                {
                    index = i;
                    break;
                }
            }

            for (int i = 0; i < n; i++)
            {
                if (gold[i] > gold[index]) r++;
                else if (gold[i] == gold[index])
                {
                    if (silver[i] > silver[index]) r++;
                    else if (silver[i] == silver[index])
                    {
                        if (bronze[i] > bronze[index]) r++;
                    }
                }
            }
            return r + 1;
        }

        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            n = int.Parse(s[0]);
            k = int.Parse(s[1]);
            country = new int[n];

            gold = new int[n];
            silver = new int[n];
            bronze = new int[n];
            for (int i = 0; i < n; i++)
            {
                string[] input = Console.ReadLine().Split();
                country[i] = int.Parse(input[0]);
                gold[i] = int.Parse(input[1]);
                silver[i] = int.Parse(input[2]);
                bronze[i] = int.Parse(input[3]);
            }

            Console.WriteLine(Rank());
        }
    }
}