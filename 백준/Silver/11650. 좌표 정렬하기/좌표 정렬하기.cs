using System;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            (int x, int y)[] nums = new (int, int)[n];

            for (int i = 0; i < n; i++)
            {
                string[] s = Console.ReadLine().Split();
                nums[i] = (int.Parse(s[0]), int.Parse(s[1]));
            }

            Array.Sort(nums);

            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < n; i++)
            {
                sb.Append($"{nums[i].x} {nums[i].y}" + "\n");
            }

            Console.WriteLine(sb);
        }
    }
}