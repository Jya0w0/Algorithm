using System;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            List<(int, string)> list = new List<(int, string)>();

            for (int i = 0; i < n; i++)
            {
                string[] s = Console.ReadLine().Split();
                int year = int.Parse(s[0]);
                string member = s[1];
                list.Add((year, member));
            }

            list = list.OrderBy(x => x.Item1).ToList();

            StringBuilder sb = new StringBuilder();
            //for (int i = 0; i < n; i++)
            //{
            //    sb.Append($"{list[i].Item1} {list[i].Item2}" + "\n");
            //}
            foreach (var l in list)
            {
                sb.Append($"{l.Item1} {l.Item2}" + "\n");
            }

            Console.WriteLine(sb);
        }
    }
}