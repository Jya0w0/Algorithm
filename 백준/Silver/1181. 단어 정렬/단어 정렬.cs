using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        string[] s = new string[n];

        for (int i = 0; i < n; i++)
        {
            s[i] = Console.ReadLine();
        }

        SortedSet<string> sortedSet = new SortedSet<string>(s, new StringComparer());

        foreach (var str in sortedSet)
        {
            Console.WriteLine(str);
        }
    }

    public class StringComparer : IComparer<string>
    {
        public int Compare(string a, string b)
        {
            if (a.Length < b.Length)
                return -1;
            else if (a.Length > b.Length)
                return 1;
            else
                return string.Compare(a, b);
        }
    }
}