using System;
using System.Collections;
using System.Linq;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            int n = int.Parse(s[0]);
            int k = int.Parse(s[1]);
            Queue<int> q = new Queue<int>();

            for (int i = 1; i <= n; i++)
            {
                q.Enqueue(i);
            }

            int count = 0;
            StringBuilder sb = new StringBuilder();
            sb.Append("<");
            while (q.Count > 1)
            {
                count++;
                if (count == k)
                {
                    sb.Append(q.Dequeue() + ", ");
                    count = 0;
                }
                else
                {
                    q.Enqueue(q.Dequeue());
                }
            }
            sb.Append(q.Dequeue() + ">");
            Console.WriteLine(sb.ToString());
        }
    }
}