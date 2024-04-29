using System;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string[] commands = new string[n];
            Stack<int> a = new Stack<int>();
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < n; i++)
            {
                commands[i] = Console.ReadLine();
                if (commands[i] == "pop")
                {
                    sb.Append(a.Count == 0 ? "-1\n" : a.Pop() + "\n");
                }
                else if (commands[i] == "size")
                {
                    sb.Append(a.Count() + "\n");
                }
                else if (commands[i] == "empty")
                {
                    sb.Append(a.Count == 0 ? "1\n" : "0\n");
                }
                else if (commands[i] == "top")
                {
                    sb.Append(a.Count == 0 ? "-1\n" : a.Peek() + "\n");
                }
                else
                {
                    string[] s = new string[2];
                    s = commands[i].Split();
                    a.Push(int.Parse(s[1]));
                }
            }
            Console.WriteLine(sb);
        }
    }
}