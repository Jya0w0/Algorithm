using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static int n;
        static int [,] map;

        static int MaxSum()
        {
            int[,] sum = new int[n, 3];
            sum[0, 0] = map[0, 0];
            sum[0, 1] = map[0, 1];
            sum[0, 2] = map[0, 2];
            for (int i = 1; i < n; i++)
            {
                int j = i - 1;
                sum[i, 0] = map[i, 0] + Math.Max(sum[j, 0], sum[j, 1]);
                sum[i, 1] = map[i, 1] + Math.Max(Math.Max(sum[j, 0], sum[j, 1]), sum[j, 2]); ;
                sum[i, 2] = map[i, 2] + Math.Max(sum[j, 1], sum[j, 2]);
            }
            return Math.Max(Math.Max(sum[n - 1, 0], sum[n - 1, 1]), sum[n - 1, 2]);
        }

        static int MinSum()
        {
            int[,] sum = new int[n, 3];
            sum[0, 0] = map[0, 0];
            sum[0, 1] = map[0, 1];
            sum[0, 2] = map[0, 2];
            for (int i = 1; i < n; i++)
            {
                int j = i - 1;
                sum[i, 0] = map[i, 0] + Math.Min(sum[j, 0], sum[j, 1]);
                sum[i, 1] = map[i, 1] + Math.Min(Math.Min(sum[j, 0], sum[j, 1]), sum[j, 2]); ;
                sum[i, 2] = map[i, 2] + Math.Min(sum[j, 1], sum[j, 2]);
            }
            return Math.Min(Math.Min(sum[n - 1, 0], sum[n - 1, 1]), sum[n - 1, 2]);
        }
        static void Main(string[] args)
        {
            n = int.Parse(Console.ReadLine());
            map = new int[n, 3];
            for (int i = 0; i < n; i++) 
            {
                string[] input = Console.ReadLine().Split();
                (map[i, 0], map[i, 1], map[i, 2]) = (int.Parse(input[0]), int.Parse(input[1]), int.Parse(input[2]));
            }
            Console.WriteLine(MaxSum() + " " + MinSum());
        }
    }
}