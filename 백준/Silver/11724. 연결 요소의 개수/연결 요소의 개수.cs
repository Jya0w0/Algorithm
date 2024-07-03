using System;
using System.Collections;
using System.Collections.Generic;

namespace CodingTest
{
    internal class Program
    {
        static int n;
        static int m;
        static List<int>[] list;
        static bool[] visited;

        static void DFS(int num)
        {
            visited[num] = true;
            foreach (int i in list[num])
            {
                if (visited[i]) continue;
                DFS(i);
            }
        }

        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            n = int.Parse(s[0]);
            m = int.Parse(s[1]);
            list = new List<int>[n + 1];
            visited = new bool[n + 1];
            for (int i  = 1; i <= n; i++)
            {
                list[i] = new List<int>();
            }

            for (int i = 0; i < m; i++)
            {
                string[] input = Console.ReadLine().Split();
                int u = int.Parse(input[0]);
                int v = int.Parse(input[1]);
                list[u].Add(v);
                list[v].Add(u);
            }

            int count = 0;
            for (int i = 1; i <= n; i++)
            {
                if (!visited[i])
                {
                    count++;
                    DFS(i);
                }
            }
            Console.WriteLine(count);
        }
    }
}