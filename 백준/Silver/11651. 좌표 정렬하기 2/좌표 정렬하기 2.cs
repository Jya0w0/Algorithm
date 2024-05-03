using System;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            (int x, int y)[] nums = new(int, int)[n];
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < n; i++)
            {
                string[] s = Console.ReadLine().Split();
                nums[i] = (int.Parse(s[0]), int.Parse(s[1]));
            }
            Array.Sort(nums, (a, b) => {
                if (a.y == b.y)
                {
                    return a.x.CompareTo(b.x);
                }
                else
                {
                    return a.y.CompareTo(b.y);
                }
            });

            for (int j = 0; j < nums.Length; j++)
            {
                sb.Append($"{nums[j].x} {nums[j].y}" + "\n");
            }

            Console.WriteLine(sb);
        }
    }
}