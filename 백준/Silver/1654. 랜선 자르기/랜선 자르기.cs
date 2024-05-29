string[] s = Console.ReadLine().Split();
int k = int.Parse(s[0]);
int n = int.Parse(s[1]);
long[] a = new long[k];
for (int i = 0; i < k; i++)
{
    a[i] = int.Parse(Console.ReadLine());
}
Array.Sort(a);

long low = 1;
long high = a[k - 1];
while (low <= high)
{
    long mid = (low + high) / 2;
    long count = 0;
    for (int i = 0; i < k; i++)
    {
        count += a[i] / mid;
    }

    if (count < n)
    {
        high = mid - 1;
    }
    else
    {
        low = mid + 1;
    }
}
Console.WriteLine(high);