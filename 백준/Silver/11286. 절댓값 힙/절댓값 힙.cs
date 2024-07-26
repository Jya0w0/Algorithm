using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static PriorityQueue<int, (int, int)> nums = new PriorityQueue<int, (int, int)>();
        static StringBuilder sb = new StringBuilder();
        static void Heap(int x)
        {
            if (x == 0)
            {
                if (nums.Count == 0) sb.AppendLine("0");
                else sb.AppendLine(nums.Dequeue().ToString());
            }
            else nums.Enqueue(x, (Math.Abs(x), x));
        }

        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            for (int i = 0; i < n; i++)
            {
                int x = int.Parse(Console.ReadLine());
                Heap(x);
            }
            Console.WriteLine(sb);
        }
    }
}