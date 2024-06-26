using System;
using System.Collections;
using System.Collections.Generic;

namespace CodingTest
{
    internal class Program
    {
        static long BinarySearch(long x, long y, long z)
        {
            long left = 0;
            long right = 1000000000;
            long answer = -1;
            while (left <= right)
            {
                long mid = (left + right) / 2;
                long newZ = ((y + mid) * 100) / (x + mid);

                if (z < newZ)
                {
                    answer = mid;
                    right =  mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            return answer;
        }

        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            long x = long.Parse(s[0]);
            long y = long.Parse(s[1]);
            long z = (y * 100) / x;

            long answer = BinarySearch(x, y, z);
            Console.WriteLine(answer);
        }
    }
}