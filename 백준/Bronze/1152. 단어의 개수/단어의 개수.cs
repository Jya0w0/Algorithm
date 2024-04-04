string[] s = Console.ReadLine().Split();
int count = 0;

for (int i = 0; i < s.Length; i++)
{
    if (s[i] == "")
    {
        count++;
    }
}

Console.WriteLine(s.Length - count);