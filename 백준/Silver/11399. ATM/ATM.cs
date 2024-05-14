int n = int.Parse(Console.ReadLine());
string[] s = Console.ReadLine().Split();
int[] p = new int[n];
for (int i = 0; i < n; i++)
{
    p[i] = int.Parse(s[i]);
}
Array.Sort(p);

int min = 0;
int sum = 0;
for (int j = 0; j < n; j++)
{
    min += p[j];
    sum += min;
}
Console.WriteLine(sum);