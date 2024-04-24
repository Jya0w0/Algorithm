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
            int[] x = new int[m];
            string[] ss = Console.ReadLine().Split();
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < m; i++)
            {
                int low = 0;
                int high = n - 1;
                x[i] = int.Parse(ss[i]);
                bool isCompare = false;

                while (low <= high && isCompare == false)
                {
                    int mid = (low + high) / 2;
                    if (x[i] == a[mid])
                    {
                        isCompare = true;
                    }
                    else if (x[i] < a[mid])
                    {
                        high = mid - 1;
                    }
                    else
                    {
                        low = mid + 1;
                    }
                }
                sb.Append(isCompare ? 1 + "\n" : 0 + "\n");
            }
            Console.WriteLine(sb);
        }
    }
}