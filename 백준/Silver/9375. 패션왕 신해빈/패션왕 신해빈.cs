using System;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int test = int.Parse(Console.ReadLine());
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < test; i++)
            {
                int n = int.Parse(Console.ReadLine());
                Dictionary<string, int> dic = new Dictionary<string, int>();
                for (int j = 0; j < n; j++)
                {
                    string[] s = Console.ReadLine().Split();
                    if (dic.ContainsKey(s[1]))
                    {
                        dic[s[1]]++;
                    }
                    else
                    {
                        dic.Add(s[1], 1);
                    }
                }
                int count = 1;
                foreach (int val in dic.Values)
                {
                    count *= (val + 1);
                }
                sb.AppendLine($"{ count - 1}");
            }
            Console.WriteLine(sb);
        }
    }
}