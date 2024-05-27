using System;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string[] nNum = Console.ReadLine().Split();
            int m = int.Parse(Console.ReadLine());
            string[] mNum = Console.ReadLine().Split();
            StringBuilder sb = new StringBuilder();

            int[] count = new int[20000001];
            for (int i = 0; i < n; i++)
            {
                int a = int.Parse(nNum[i]) + 10000000;
                count[a]++;
            }
            for (int i = 0; i < m; i++)
            {
                int b = int.Parse(mNum[i]) + 10000000;
                sb.Append(count[b] + " ");
            }
            Console.WriteLine(sb.ToString());
        }
    }
}