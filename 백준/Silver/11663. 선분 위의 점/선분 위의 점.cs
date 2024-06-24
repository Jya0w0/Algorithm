using System;
using System.Collections.Generic;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static string[] s;
        static int n;
        static int m;
        static string[] ss;
        static int[] point = new int[n];
        static (int, int) BinarySearch(int x, int y)
        {
            int start = 0;
            int end = n - 1;
            int smallest = -1;
            int largest = -1;

            while (start <= end)
            {
                int mid = (start + end) / 2;
                if (point[mid] <= y)
                {
                    largest = mid;
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }

            start = 0;
            end = n - 1;
            while (start <= end)
            {
                int mid = (start + end) / 2;
                if (point[mid] >= x)
                {
                    smallest = mid;
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            return (smallest, largest);
        }
        static void Main(string[] args)
        {
            s = Console.ReadLine().Split();
            n = int.Parse(s[0]);
            m = int.Parse(s[1]);
            ss = Console.ReadLine().Split();
            point = new int[n];
            for (int i = 0; i < n; i++)
            {
                point[i] = int.Parse(ss[i]);
            }
            Array.Sort(point);

            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < m; i++)
            {
                string[] input = Console.ReadLine().Split();
                (int a, int b) = BinarySearch(int.Parse(input[0]), int.Parse(input[1]));
                sb.AppendLine($"{(a == -1 || b == -1 || a > b ? 0 : b - a + 1)}");
            }
            Console.WriteLine(sb);
        }
    }
}