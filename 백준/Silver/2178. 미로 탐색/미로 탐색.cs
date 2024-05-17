using System;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            int n = int.Parse(s[0]);
            int m = int.Parse(s[1]);
            int[,] map = new int[n + 1, m + 1];

            for (int i = 1; i <= n; i++)
            {
                string input = Console.ReadLine();
                int y = 1;
                for (int j = 0; j < input.Length; j++)
                {
                    map[i, y++] = input[j] - '0';
                }
            }

            Queue<(int, int)> q = new Queue<(int, int)>();
            int[,] visited = new int[n + 1, m + 1];
            int count = 0;

            q.Enqueue((1, 1));
            visited[1, 1] = 2;
            while (q.Count != 0)
            {
                count++;
                int qCount = q.Count;
                for (int i = 0; i < qCount; i++)
                {
                    (int nodeX, int nodeY) = q.Dequeue(); // 현재 좌표 노드.
                    if (nodeX == n && nodeY == m)
                    {
                        Console.WriteLine(count);
                        return;
                    }

                    (int x, int y)[] xy = { (nodeX, nodeY - 1), (nodeX, nodeY + 1), (nodeX - 1, nodeY), (nodeX + 1, nodeY) }; // 현재 노드의 인접한 노드 중 하나 저장.
                    for (int j = 0; j < 4; j++)
                    {
                        int a = xy[j].x;
                        int b = xy[j].y;
                        if (a <= 0 || b <= 0 || a > n || b > m) continue; // 없는 좌표라면.
                        if (visited[a, b] != 2 && map[a, b] != 0) // 현재 노드에 방문하지 않았고 갈 수 없는 좌표가 아니라면
                        {
                            q.Enqueue((a, b)); // Queue에 방문 예약.
                            visited[a, b] = 2; // 현재 노드에 방문함.
                        }
                    }
                }
            }
        }
    }
}