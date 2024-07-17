using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string[] input = Console.ReadLine().Split();
            int[] t = new int[n + 1];
            for (int i = 1; i <= n; i++) 
            {
                t[i] = int.Parse(input[i - 1]);
            }

            int[] answer = new int[n];
            Stack<int> s = new Stack<int>();
            for (int i = 1; i <= n; i++)
            {
                while (s.Count > 0)
                {
                    if(t[s.Peek()] >= t[i]) break;
                    s.Pop();
                }

                if (s.Count == 0)
                {
                    answer[i - 1] = 0;
                }
                else
                {
                    answer[i - 1] = s.Peek();
                }

                s.Push(i);
            }

            StringBuilder sb = new StringBuilder();
            foreach (int i in answer)
            {
                sb.Append(i + " ");
            }
            Console.WriteLine(sb);
        }
    }
}