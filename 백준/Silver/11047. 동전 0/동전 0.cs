string[] s = Console.ReadLine().Split();
int n = int.Parse(s[0]);
int k = int.Parse(s[1]);
int[] coins = new int[n];

for (int i = 0; i < n; i++)
{
    coins[i] = int.Parse(Console.ReadLine());
}

int sum = 0;
int count = 0;

for (int i = n - 1; i >= 0; i--)
{
    if (sum + coins[i] <= k)
    {
        while (sum < k)
        {
            if (sum + coins[i] > k) break;
            sum += coins[i];
            count++;
        }
    }
}

Console.WriteLine(count);