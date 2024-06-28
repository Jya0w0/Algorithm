using System;
using System.Collections;
using System.Collections.Generic;

namespace CodingTest
{
    internal class Program
    {
        static int[] solution;
        static int n;
        static int m;
        static int TwoPointer()
        {
            int left = 0;
            int right = 0;
            int sum = solution[left];
            int count = 0;
            while (left < n)
            {
                if (sum < m)
                {
                    right++;
                    if (right == n)
                    {
                        break;
                    }
                    else
                    {
                        sum += solution[right];
                    }
                }
                else
                {
                    if (sum == m)
                    {
                        count++;
                    }
                    sum -= solution[left];
                    left++;
                }
            }
            return count;
        }

        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            n = int.Parse(s[0]);
            m = int.Parse(s[1]);
            string[] input = Console.ReadLine().Split();
            solution = new int[n];
            for(int i  = 0; i < n; i++)
            {
                solution[i] = int.Parse(input[i]);
            }
           int answer = TwoPointer();
            Console.WriteLine(answer);
        }
    }
}