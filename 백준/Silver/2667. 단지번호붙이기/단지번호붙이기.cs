using System;

namespace CodingTest
{
    internal class Program
    {
        static int n;
        static int[,] map;
        static int[] dx = { 0, 0, 1, -1 };
        static int[] dy = { 1, -1, 0, 0 };
        static List<int> list = new List<int>();
        static int count = 0;
        static bool DFS(int x, int y)
        {
            if (x < 0 || x >= n || y < 0 || y >= n)
            {
                return false;
            }

            if (map[x, y] == 1) // 현재 위치에 집이 있으면.
            {
                count++;
                map[x, y] = 0;
                for (int i = 0; i < 4; i++) // 주변 좌표로 이동.
                {
                    int nx = x + dx[i];
                    int ny = y + dy[i];
                    DFS(nx, ny);
                }
                return true;
            }
            else
            {
                return false;
            }
        }
        static void Main(string[] args)
        {
            n = int.Parse(Console.ReadLine());
            map = new int[n, n];

            for (int i = 0; i < n; i++)
            {
                string input = Console.ReadLine();
                for (int j = 0; j < n; j++)
                {
                    map[i, j] = input[j] - '0';
                }
            }

            int complex = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (DFS(i, j))
                    {
                        complex++;
                        list.Add(count);
                        count = 0;
                    }
                }
            }
            list.Sort();

            Console.WriteLine(complex);
            foreach (int i in list)
            {
                Console.WriteLine(i);
            }
        }
    }
}