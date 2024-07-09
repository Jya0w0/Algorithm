using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int x = int.Parse(Console.ReadLine());
            int[] count = new int[x + 1];
            int[] num = new int[x + 1];
            for (int i = 2; i <= x; i++)
            {
                count[i] = count[i - 1] + 1;
                num[i] = i - 1;
                if (i % 3 == 0 && count[i] > count[i / 3] + 1)
                {
                    count[i] = count[i / 3] + 1;
                    num[i] = i / 3;
                }
                if (i % 2 == 0 && count[i] > count[i / 2] + 1)
                {
                    count[i] = count[i / 2] + 1;
                    num[i] = i / 2;
                }
            }
            Console.WriteLine(count[x]);

            StringBuilder sb = new StringBuilder();
            while(x > 0)
            {
                sb.Append(x + " ");
                x = num[x];
            }
            Console.WriteLine(sb);
        }
    }
}