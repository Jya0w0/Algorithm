using System;
using System.Collections;
using System.Collections.Generic;

namespace CodingTest
{
    internal class Program
    {
        static int l;
        static int c;
        static string[] input;
        static List<string> passwords = new List<string>();

        static bool IsValid(string password)
        {
            int vowel = 0, consonant = 0;

            foreach (char c in password)
            {
                if ("aeiou".Contains(c))
                {
                    vowel++;
                }
                else
                {
                    consonant++;
                }
            }

            return vowel >= 1 && consonant >= 2;
        }

        static void Password(int a, int b, string answer)
        {
            if(b == l)
            {
                if (IsValid(answer))
                {
                    passwords.Add(answer);
                }
                return;
            }
            for (int i = a; i < c; i++)
            {
                Password(i + 1, b + 1, answer + input[i]);
            }
        }

        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            l = int.Parse(s[0]);
            c = int.Parse(s[1]);

            input = Console.ReadLine().Split();
            Array.Sort(input);

            Password(0, 0, "");

            foreach (var password in passwords)
            {
                Console.WriteLine(password);
            }
        }
    }
}