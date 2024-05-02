using System;
using System.Text;
using System.Threading.Channels;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            Queue<int> a = new Queue<int>();
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < n; i++)
            {
                string[] s = Console.ReadLine().Split();
                if (s[0] == "push")
                {
                    a.Enqueue(int.Parse(s[1]));
                }
                else if (s[0] == "pop")
                {
                    sb.Append(a.Count == 0 ? "-1\n" :  a.Dequeue() + "\n");
                }
                else if (s[0] == "size")
                {
                    sb.Append(a.Count + "\n");
                }
                else if (s[0] == "empty")
                {
                    sb.Append(a.Count == 0 ? "1\n" : "0\n");
                }
                else if (s[0] == "front")
                {
                    sb.Append(a.Count == 0 ? "-1\n" : a.First() + "\n");
                }
                else if (s[0] == "back")
                {
                    sb.Append(a.Count == 0 ? "-1\n" : a.Last() + "\n");
                }
            }
            Console.WriteLine(sb);
        }
    }
}