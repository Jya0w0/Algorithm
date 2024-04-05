string s = Console.ReadLine().ToUpper();
Dictionary<char, int> count = new Dictionary<char, int>();
int max = 0;
int cnt = 0;

foreach (char c in s)
{
    if (count.ContainsKey(c))
    {
        count[c]++;
    }
    else
    {
        count.Add(c, 1);
    }
    max = Math.Max(max, count[c]);
}

char ch = '?';
foreach (var v in count)
{
    if(v.Value == max)
    {
        ch = v.Key;
        cnt++;
    }
}

Console.WriteLine(cnt >= 2 ? '?' : ch);