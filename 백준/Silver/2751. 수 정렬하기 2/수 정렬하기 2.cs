using System;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int[] nums = new int[n];

            for(int i = 0; i < n; i++)
            {

                nums[i] = int.Parse(Console.ReadLine());
            }

            Array.Sort(nums);

            StringBuilder sb = new StringBuilder();

            for(int j = 0; j < n; j++)
            {
                sb.Append(nums[j] + "\n");
            }

            Console.WriteLine(sb);
        }
    }
}