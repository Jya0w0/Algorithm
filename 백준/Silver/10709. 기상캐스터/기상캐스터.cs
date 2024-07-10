using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;

namespace CodingTest
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            int h = int.Parse(s[0]);
            int w = int.Parse(s[1]);
            char[,] area = new char[h, w];
            for(int i = 0; i < h; i++)
            {
                string input = Console.ReadLine();
                for(int j = 0; j < w; j++)
                {
                    area[i, j] = input[j];
                }
            }

            StringBuilder sb = new StringBuilder();
            for(int i = 0;i < h; i++)
            {
                int time = 0;
                for (int j = 0;j < w; j++)
                {
                    if (area[i, j] == 'c')
                    {
                        sb.Append(0 + " ");
                        time = 1;
                    }
                    else
                    {
                        if (time == 0)
                        {
                            sb.Append(-1 + " ");
                            time = 0;
                        }
                        else
                        {
                            sb.Append(time + " ");
                            time++;
                        }
                    }
                }
                sb.AppendLine();
            }
            Console.WriteLine(sb);
        }
    }
}