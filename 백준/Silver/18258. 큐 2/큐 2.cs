using System;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int back = 0;
            Queue<int> q = new Queue<int>();
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < n; i++)
            {
                string[] s = Console.ReadLine().Split();
                if (s[0] == "push")
                {
                    int num = int.Parse(s[1]);
                    q.Enqueue(num);
                    back = num;
                }
                else if (s[0] == "pop")
                {
                    sb.Append(q.Count == 0 ? "-1\n" : q.Dequeue() + "\n");
                }
                else if (s[0] == "size")
                {
                    sb.Append(q.Count + "\n");
                }
                else if (s[0] == "empty")
                {
                    sb.Append(q.Count == 0 ? "1\n" : "0\n");
                }
                else if (s[0] == "front")
                {
                    sb.Append(q.Count == 0 ? "-1\n" : q.Peek() + "\n");
                }
                else if (s[0] == "back")
                {
                    sb.Append(q.Count == 0 ? "-1\n" : back + "\n");
                }
            }
            Console.WriteLine(sb);
        }
    }
}