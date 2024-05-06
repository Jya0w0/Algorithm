using System;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            Stack<int> s = new Stack<int>();
            int num = 1;
            StringBuilder sb = new StringBuilder();

            for (int i = 1; i <= n; i++)
            {
                int input = int.Parse(Console.ReadLine());
                if (num <= input)
                {
                    for (int j = num; j <= input; j++)
                    {
                        sb.Append("+\n");
                        s.Push(j);
                        num = input + 1;
                    }
                }
                if(input == s.Peek())
                {
                    sb.Append("-\n");
                    s.Pop();
                }
                else if(input != s.Peek())
                {
                    Console.WriteLine("NO");
                    return;
                }
            }

            Console.WriteLine(sb);
        }
    }
}