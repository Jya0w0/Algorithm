int n = int.Parse(Console.ReadLine());
string[] s = new string[n];

for(int i = 0; i < n; i++)
{
    s[i] = Console.ReadLine();
}
Array.Sort(s, (a, b) => {
    if (a.Length < b.Length)
        return -1;
    else if (a.Length > b.Length)
        return 1;
    else //a.Length == b.Length
        return string.Compare(a, b);
});

Dictionary<string, int> words = new Dictionary<string, int> ();
foreach(string word in s)
{
    if (!words.ContainsKey(word))
    {
        Console.WriteLine(word);
        words.Add(word, 1);
    }
    else
    {
        continue;
    }
}