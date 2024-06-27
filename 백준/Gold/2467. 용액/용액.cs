using System;
using System.Collections;
using System.Collections.Generic;

namespace CodingTest
{
    internal class Program
    {
        static int[] solution;
        static int n;
        static (int, int) BinarySearch()
        {
            int left = 0;
            int right = n - 1;
            int currentSum = Math.Abs(solution[left] + solution[right]);
            int[] answer = new int[2];
            answer[0] = solution[left];
            answer[1] = solution[right];
            while (left < right)
            {
                int sum = solution[left] + solution[right];

                if (Math.Abs(sum) < currentSum)
                {
                    answer[0] = solution[left];
                    answer[1] = solution[right];
                    currentSum = Math.Abs(sum);
                }
                else
                {
                    if (sum < 0)
                    {
                        left++;
                    }
                    else
                    {
                        right--;
                    }
                }
            }
            return (answer[0], answer[1]);
        }

        static void Main(string[] args)
        {
            n = int.Parse(Console.ReadLine());
            string[] input = Console.ReadLine().Split();
            solution = new int[n];
            for(int i  = 0; i < n; i++)
            {
                solution[i] = int.Parse(input[i]);
            }
           (int answerA, int answerB) = BinarySearch();
            Console.WriteLine($"{answerA} {answerB}");
        }
    }
}