long n = int.Parse(Console.ReadLine());
string[] s = Console.ReadLine().Split();
long[] x = new long[n];

for (long i = 0; i < n; i++)
{
    x[i] = long.Parse(s[i]);
}
Array.Sort(x);
Array.Reverse(x);

double max = x[0];
for (long i = 1; i < n; i++)
{
    max += (double)x[i] / 2;
}
Console.WriteLine(max);