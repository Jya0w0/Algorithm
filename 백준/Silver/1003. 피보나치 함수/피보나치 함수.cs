using System;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int t = int.Parse(Console.ReadLine());
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < t; i++)
            {
                int n = int.Parse(Console.ReadLine());
                int[,] fibonacci = new int [41, 2];
                fibonacci[0, 0] = 1;
                fibonacci[1, 1] = 1;
                for (int j = 2; j <= n; j++)
                {
                    fibonacci[j, 0] = fibonacci[j - 1, 0] + fibonacci[j - 2, 0];
                    fibonacci[j, 1] = fibonacci[j - 1, 1] + fibonacci[j - 2, 1];
                }
                sb.AppendLine($"{fibonacci[n, 0]} {fibonacci[n, 1]}");
            }
            Console.WriteLine(sb);
        }
    }
}