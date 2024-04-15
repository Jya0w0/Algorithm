int n = int.Parse(Console.ReadLine());
int answer = n;

for (int i = 0; i < n; i++)
{
    string s = Console.ReadLine();
    Dictionary<char, int> words = new Dictionary<char, int>();

    for (int j = 0; j < s.Length; ++j)
    {
        if (!words.ContainsKey(s[j]))
        {
            words.Add(s[j], j);
            continue;
        }

        int interval = j - words[s[j]];
        if (interval == 1)
        {
            words[s[j]] = j;
            continue;
        }

        answer--;
        break;
    }
}
Console.WriteLine(answer);