int n = int.Parse(Console.ReadLine());
string[] s = Console.ReadLine().Split();
int[] x = new int[n];

for (int i = 0; i < n; i++)
{
    x[i] = int.Parse(s[i]);
}
Array.Sort(x);

double max = x[n - 1];
for (int i = n - 2; i >= 0; i--)
{
    max += (double)x[i] / 2;
}
Console.WriteLine(max);