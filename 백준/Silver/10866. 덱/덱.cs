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
            int n = int.Parse(Console.ReadLine());
            LinkedList<int> l = new LinkedList<int>();
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < n; i++)
            {
                string[] input = Console.ReadLine().Split();
                if (input[0] == "push_front")
                {
                    l.AddFirst(int.Parse(input[1]));
                }
                else if (input[0] == "push_back")
                {
                    l.AddLast(int.Parse(input[1]));
                }
                else if (input[0] == "pop_front")
                {
                    sb.AppendLine($"{(l.Count > 0 ? l.First.Value : -1)}");
                    if (l.Count != 0) l.RemoveFirst();
                }
                else if (input[0] == "pop_back")
                {
                    sb.AppendLine($"{(l.Count > 0 ? l.Last.Value : -1)}");
                    if (l.Count != 0) l.RemoveLast();
                }
                else if (input[0] == "size")
                {
                    sb.AppendLine($"{l.Count}");
                }
                else if (input[0] == "empty")
                {
                    sb.AppendLine($"{(l.Count == 0 ? 1 : 0)}");
                }
                else if (input[0] == "front")
                {
                    sb.AppendLine($"{(l.Count > 0 ? l.First.Value : -1)}");
                }
                else if (input[0] == "back")
                {
                    sb.AppendLine($"{(l.Count > 0 ? l.Last.Value : -1)}");
                }
            }
            Console.WriteLine(sb.ToString());
        }
    }
}