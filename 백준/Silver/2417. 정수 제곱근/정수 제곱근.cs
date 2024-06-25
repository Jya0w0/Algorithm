ulong n = ulong.Parse(Console.ReadLine());
long left = 0;
long right = (long)Math.Sqrt(n) + 1;
ulong q = 0;
while (left <= right)
{

    ulong mid = (ulong)((left + right) / 2);
    if (mid * mid >= n)
    {
        q = mid;
        right = (long)(mid - 1);
    }
    else
    {
        left = (long)(mid + 1);
    }
}
Console.WriteLine(q);