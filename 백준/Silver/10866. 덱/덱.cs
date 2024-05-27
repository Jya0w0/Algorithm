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
            LinkedList<int> list = new LinkedList<int>();
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < n; i++)
            {
                string[] input = Console.ReadLine().Split();
                if (input[0] == "push_front")
                {
                    list.AddFirst(int.Parse(input[1]));
                }
                else if (input[0] == "push_back")
                {
                    list.AddLast(int.Parse(input[1]));
                }
                else if (input[0] == "pop_front")
                {
                    if (list.Count > 0)
                    {
                        sb.Append(list.First.Value + "\n");
                        list.RemoveFirst();
                    }
                    else
                    {
                        sb.Append(-1 + "\n");
                    }
                }
                else if (input[0] == "pop_back")
                {
                    if (list.Count > 0)
                    {
                        sb.Append(list.Last.Value + "\n");
                        list.RemoveLast();
                    }
                    else
                    {
                        sb.Append(-1 + "\n");
                    }
                }
                else if (input[0] == "size")
                {
                    sb.Append(list.Count + "\n");
                }
                else if (input[0] == "empty")
                {
                    sb.Append(list.Count == 0 ? 1 + "\n" : 0 + "\n");
                }
                else if (input[0] == "front")
                {
                    sb.Append(list.Count > 0 ? list.First.Value + "\n" : -1 + "\n");
                }
                else if (input[0] == "back")
                {
                    sb.Append(list.Count > 0 ? list.Last.Value + "\n" : -1 + "\n");
                }
            }
            Console.WriteLine(sb.ToString());
        }
    }
}