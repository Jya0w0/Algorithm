using System;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            int m = int.Parse(s[0]);
            int n = int.Parse(s[1]);
            bool[] isPrime = new bool[n + 1];

            for (int i = 2; i <= n; i++)
            {
                isPrime[i] = true;
            }

            for (int i = 2; i * i <= n; i++)
            {
                if (isPrime[i])
                {
                    for (int j = i * i; j <= n; j += i)
                    {
                        isPrime[j] = false;
                    }
                }
            }

            StringBuilder sb = new StringBuilder();
            for (int i = m; i <= n; i++)
            {
                if (isPrime[i])
                {
                    sb.Append(i + "\n");
                }
            }
            Console.WriteLine(sb);
        }
    }
}