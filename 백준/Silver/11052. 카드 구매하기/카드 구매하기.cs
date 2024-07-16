int n = int.Parse(Console.ReadLine());
string[] input = Console.ReadLine().Split();
int[] p = new int[n + 1];
for (int i = 1; i <= n; i++) 
{
    p[i] = int.Parse(input[i - 1]);
}

int[] dp = new int[n + 1];
for (int i = 1; i <= n; i++)
{
    for (int j = 0; j <= i; j++)
    {
        dp[i] = Math.Max(dp[i], dp[i - j] + p[j]);
    }
}
Console.WriteLine(dp[n]);