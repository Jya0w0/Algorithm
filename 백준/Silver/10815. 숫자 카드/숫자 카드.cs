using System;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int[] a = new int[n];
            string[] s = Console.ReadLine().Split();

            for (int i = 0; i < n; i++)
            {
                a[i] = int.Parse(s[i]);
            }
            Array.Sort(a);

            int m = int.Parse(Console.ReadLine());
            int[] b = new int[m];
            string[] ss = Console.ReadLine().Split();
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < m; i++)
            {
                int low = 0;
                int high = n - 1;
                b[i] = int.Parse(ss[i]);
                bool isSame = false;

                while(low <= high && !isSame)
                {
                    int mid = (low + high) / 2;
                    if (b[i] == a[mid])
                    {
                        isSame = true;
                    }
                    else if (b[i] > a[mid])
                    {
                        low = mid + 1;
                    }
                    else
                    {
                        high = mid - 1;
                    }
                }
                sb.Append(isSame ? "1 " : "0 ");
            }
            Console.WriteLine(sb.ToString().TrimEnd());
        }
    }
}