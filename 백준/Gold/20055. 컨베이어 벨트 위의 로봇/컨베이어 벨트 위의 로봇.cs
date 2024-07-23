using System;
using System.Collections;
using System.Collections.Generic;

namespace CodingTest
{
    internal class Program
    {
        static void OnRobot(int[] belt, bool[] isRobot, int n)
        {
            int temp = belt[(n * 2) - 1];
            for (int i = (n * 2) - 1; i > 0; i--)
            {
                belt[i] = belt[i - 1];
            }
            belt[0] = temp;

            for (int i = n - 1; i > 0; i--)
            {
                isRobot[i] = isRobot[i - 1];
            }
            isRobot[0] = false;

            isRobot[n - 1] = false;
        }

        static void Move(int[] belt, bool[] isRobot, int n)
        {
            for (int i = n - 2; i >= 0; i--)
            {
                if (isRobot[i] && !isRobot[i + 1] && belt[i + 1] > 0)
                {
                    isRobot[i] = false;
                    isRobot[i + 1] = true;
                    belt[i + 1]--;

                    if (i + 1 == n - 1)
                    {
                        isRobot[i + 1] = false;
                    }
                }
            }
        }

        static void Place(int[] belt, bool[] isRobot)
        {
            if (belt[0] > 0)
            {
                isRobot[0] = true;
                belt[0]--;
            }
        }

        static int CountZero(int[] belt)
        {
            int count = 0;
            foreach (int b in belt)
            {
                if (b == 0)
                {
                    count++;
                }
            }
            return count;
        }

        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            int n = int.Parse(s[0]);
            int k = int.Parse(s[1]);

            string[] input = Console.ReadLine().Split();
            int[] belt = new int[n * 2];
            for (int i = 0; i < n * 2; i++)
            {
                belt[i] = int.Parse(input[i]);
            }

            bool[] isRobot = new bool[n * 2];
            int count = 0;
            while (true)
            {
                count++;
                OnRobot(belt, isRobot, n);
                Move(belt, isRobot, n);
                Place(belt, isRobot);
                if (CountZero(belt) >= k)
                {
                    break;
                }
            }
            Console.WriteLine(count);
        }
    }
}