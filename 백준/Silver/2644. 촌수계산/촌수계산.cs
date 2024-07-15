using System;
using System.Collections;
using System.Collections.Generic;

namespace CodingTest
{
    internal class Program
    {
        static bool[] visited;
        static List<int>[] list;
        static int answer;
        static int b;
        static void DFS(int node, int count)
        {
            visited[node] = true;
            for (int i = 0; i < list[node].Count; i++)
            {
                int x = list[node][i];
                if (!visited[x])
                {
                    if (x == b)
                    {
                        answer = count + 1;
                        return;
                    }
                    DFS(x, count + 1);
                }
            }
        }
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            visited = new bool[n + 1];
            list = new List<int>[n + 1];
            for (int i = 0; i <= n; i++)
            {
                list[i] = new List<int>();
            }

            string[] s = Console.ReadLine().Split();
            int a = int.Parse(s[0]);
            b = int.Parse(s[1]);

            int m = int.Parse(Console.ReadLine());
            for (int i = 0; i < m; i++)
            {
                string[] input = Console.ReadLine().Split();
                list[int.Parse(input[0])].Add(int.Parse(input[1]));
                list[int.Parse(input[1])].Add(int.Parse(input[0]));
            }

            answer = -1;
            DFS(a, 0);
            Console.WriteLine(answer);
        }
    }
}