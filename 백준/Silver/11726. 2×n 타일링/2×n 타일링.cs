int n = int.Parse(Console.ReadLine());
int[] count = new int[n + 2];
count[1] = 1;
count[2] = 2;
for (int i = 3; i <= n; i++)
{
    count[i] = (count[i - 2] + count[i - 1]) % 10007;
}
Console.WriteLine(count[n]);