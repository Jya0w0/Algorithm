using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int test = int.Parse(Console.ReadLine());
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < test; i++)
            {
                string[] s = Console.ReadLine().Split();
                int n = int.Parse(s[0]);
                int m = int.Parse(s[1]);
                string[] input = Console.ReadLine().Split();
                int[] nums = new int[100];
                Queue<(int, int)> q = new Queue<(int, int)>();
                for (int j = 0; j < n; j++)
                {
                    nums[j] = int.Parse(input[j]);
                    q.Enqueue((nums[j], j));
                }

                int max = nums.Max();
                int count = 0;
                while(q.Count > 0)
                {
                    if(max == q.Peek().Item1)
                    {
                        if (q.Peek().Item2 == m)
                        {
                            sb.AppendLine($"{ count + 1}");
                            break;
                        }
                        q.Dequeue();
                        max = q.Max().Item1;
                        count++;
                    }
                    else
                    {
                        q.Enqueue(q.Dequeue());
                    }
                }
            }
            Console.WriteLine(sb.ToString());
        }
    }
}