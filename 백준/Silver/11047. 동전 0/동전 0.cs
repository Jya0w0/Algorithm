string[] s = Console.ReadLine().Split();
int n = int.Parse(s[0]);
int k = int.Parse(s[1]);
int[] coins = new int[n];

for (int i = 0; i < n; i++)
{
    coins[i] = int.Parse(Console.ReadLine());
}

int count = 0;

for (int i = n - 1; i >= 0; i--)
{
    if (k / coins[i] != 0)
    {
        int a = k / coins[i];
        count += a;
        k -= a * coins[i];
    }
}

Console.WriteLine(count);