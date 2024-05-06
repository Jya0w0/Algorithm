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
                string input = Console.ReadLine();
                Stack<char> s = new Stack<char>();
                for (int j = 0; j < input.Length; j++)
                {
                    if (input[j] == '(')
                    {
                        s.Push(input[j]);
                    }
                    else if (input[j] == ')' && s.Count == 0)
                    {
                        s.Push(input[j]);
                        break;
                    }
                    else if (input[j] == ')' && s.Count > 0)
                    {
                        s.Pop();
                    }
                }
                sb.Append(s.Count == 0 ? "YES\n" : "NO\n");
            }

            Console.WriteLine(sb);
        }
    }
}