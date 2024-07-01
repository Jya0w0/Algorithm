using System;
using System.Collections;
using System.Collections.Generic;

namespace CodingTest
{
    internal class Program
    {
        static int n;
        static int k;
        static bool[] visited;

        static bool isVisited(int n)
        {
            if (n < 0 || n >= visited.Length || visited[n]) return false;
            return true;
        }

        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            n = int.Parse(s[0]);
            k = int.Parse(s[1]);
            Queue < (int, int)> q = new Queue<(int, int)>();
            visited = new bool[100001];

            q.Enqueue((n, 0));
            visited[n] = true;
            while (q.Count != 0)
            {
                int node = q.Peek().Item1;
                int count = q.Peek().Item2;
                q.Dequeue();

                if (node == k)
                {
                    Console.WriteLine(count);
                    break;
                }
                int[] x = { node - 1, node + 1, node * 2 };
                foreach (int i in x)
                {
                    if (isVisited(i))
                    {
                        q.Enqueue((i, count + 1));
                        visited[i] = true;
                    }
                }
            }
        }
    }
}