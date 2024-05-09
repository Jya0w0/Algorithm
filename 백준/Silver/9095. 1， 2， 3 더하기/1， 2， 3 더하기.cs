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
                int[] dp = new int[11];
                dp[0] = 1;
                dp[1] = 2;
                dp[2] = 4;
                for (int j = 3; j < n; j++)
                {
                    dp[j] = dp[j - 3] + dp[j - 2] + dp[j - 1];
                }
                sb.Append(dp[n - 1] + "\n");
            }
            Console.WriteLine(sb);
        }
    }
}