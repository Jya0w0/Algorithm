int n = int.Parse(Console.ReadLine());
int[] h = new int[n];
int[] w = new int[n];

for (int i = 0; i < n; i++)
{
    string[] s = Console.ReadLine().Split();
    h[i] = int.Parse(s[0]);
    w[i] = int.Parse(s[1]);
}

for (int i = 0; i < n; i++)
{
    int rank = 1;
    for (int j = 0; j < n; j++)
    {
        if (h[i] < h[j] && w[i] < w[j])
        {
            rank++;
        }
    }
    Console.Write(rank + " ");
}