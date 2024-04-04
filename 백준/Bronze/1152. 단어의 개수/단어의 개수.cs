string[] s = Console.ReadLine().Split();
int count = 0;

for (int i = 0; i < s.Length; i++)
{
    count += s[i] == "" ? 0 : 1;
}

Console.WriteLine(count);