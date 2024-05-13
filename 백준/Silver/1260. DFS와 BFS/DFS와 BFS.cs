using System;

namespace CodingTest
{
    internal class Program
    {
        static string[] s = Console.ReadLine().Split();
        static int n = int.Parse(s[0]);
        static int m = int.Parse(s[1]);
        static int v = int.Parse(s[2]);
        static int[] visitedDFS = new int[n + 1];
        static int[] visitedBFS = new int[n + 1];
        static List<int>[] nearNode = new List<int>[n + 1];

        static void DFS(int node)
        {
            if (visitedDFS[node] == 1) return;
            visitedDFS[node] = 1;
            Console.Write(node + " ");

            for (int i = 0; i < nearNode[node].Count; i++)
            {
                int x = nearNode[node][i];
                DFS(x);
            }
        }
        static void Main(string[] args)
        {
            Queue<int> bfs = new Queue<int>();
            for (int i = 0; i < nearNode.Length; i++)
            {
                nearNode[i] = new List<int>();
            }

            for (int i = 0; i < m; i++)
            {
                string[] ss = Console.ReadLine().Split();
                int a = int.Parse(ss[0]);
                int b = int.Parse(ss[1]);
                nearNode[a].Add(b);
                nearNode[b].Add(a);
            }

            for (int i = 0; i < nearNode.Length; i++)
            {
                nearNode[i].Sort();
            }

            DFS(v);
            Console.WriteLine();
            bfs.Enqueue(v);
            visitedBFS[v] = 1;
            while (bfs.Count != 0)
            {
                int node = bfs.Dequeue();
                Console.Write(node + " ");

                for (int i = 0; i < nearNode[node].Count; i++)
                {
                    int x = nearNode[node][i];
                    if (visitedBFS[x] != 1)
                    {
                        bfs.Enqueue(x);
                        visitedBFS[x] = 1;
                    }
                }
            }
        }
    }
}