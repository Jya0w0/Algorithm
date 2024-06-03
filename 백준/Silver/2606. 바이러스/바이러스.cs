using System;

namespace CodingTest
{
    internal class Program
    {
        static int c = int.Parse(Console.ReadLine());
        static int n = int.Parse(Console.ReadLine());
        static int[] visited = new int[c + 1];
        static List<int>[] list = new List<int>[c + 1];
        static int count = 0;
        static void DFS(int node)
        {
            if (visited[node] == 1) return;
            visited[node] = 1;
            count++;

            for (int i = 0; i < list[node].Count; i++)
            {
                int x = list[node][i];
                DFS(x);
            }
        }
        static void Main(string[] args)
        {
            for (int i = 1; i <= c; i++)
            {
                list[i] = new List<int>();
            }

            for(int i = 0; i < n; i++)
            {
                string[] s = Console.ReadLine().Split();
                int a = int.Parse(s[0]);
                int b = int.Parse(s[1]);
                list[a].Add(b);
                list[b].Add(a);
            }
            DFS(1);
            Console.WriteLine(count - 1);
        }
    }
}