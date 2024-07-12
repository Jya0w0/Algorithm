using System;
using System.Collections;
using System.Collections.Generic;

namespace CodingTest
{
    internal class Program
    {
        static string[] words;
        static string firstWord;

        static bool IsSame(string input)
        {
            int len1 = firstWord.Length;
            int len2 = input.Length;

            if (Math.Abs(len2 - len1) > 1) return false;

            Dictionary<char, int> dic = new Dictionary<char, int>();
            for (int i = 0; i < len2; i++)
            {
                if (dic.ContainsKey(input[i])) dic[input[i]]++;
                else dic[input[i]] = 1;
            }

            int difference = 0;
            foreach (char c in firstWord)
            {
                if (dic.ContainsKey(c) && dic[c] > 0) dic[c]--;
                else difference++;
            }

            foreach (char c in dic.Values)
            {
                difference += c;
            }

            if (difference - 1 > 1) return false;
            return true;
        }

        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            words = new string[n];
            for (int i = 0; i < n; i++)
            {
                words[i] = Console.ReadLine();
            }

            firstWord = words[0];

            int count = 0;
            for (int i = 1; i < words.Length; i++)
            {
                if (IsSame(words[i])) count++;
            }

            Console.WriteLine(count);
        }
    }
}