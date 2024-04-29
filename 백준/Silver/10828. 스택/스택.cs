using System;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            Stack<int> a = new Stack<int>();
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < n; i++)
            {
                string[] commands = Console.ReadLine().Split();
                if (commands[0] == "push")
                {
                    a.Push(int.Parse(commands[1]));
                }
                else if (commands[0] == "pop")
                {
                    sb.Append(a.Count == 0 ? "-1\n" : a.Pop() + "\n");
                }
                else if (commands[0] == "size")
                {
                    sb.Append(a.Count() + "\n");
                }
                else if (commands[0] == "empty")
                {
                    sb.Append(a.Count == 0 ? "1\n" : "0\n");
                }
                else if (commands[0] == "top")
                {
                    sb.Append(a.Count == 0 ? "-1\n" : a.Peek() + "\n");
                }
            }
            Console.WriteLine(sb);
        }
    }
}