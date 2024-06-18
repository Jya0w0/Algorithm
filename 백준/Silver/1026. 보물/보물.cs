int n = int.Parse(Console.ReadLine());
string[] inputA = Console.ReadLine().Split();
string[] inputB = Console.ReadLine().Split();
int[] a = new int[n];
int[] b = new int[n];
for (int i = 0; i < n; i++)
{
    a[i] = int.Parse(inputA[i]);
    b[i] = int.Parse(inputB[i]);
}
Array.Sort(a);
Array.Sort(b);
Array.Reverse(b);
int s = 0;
for (int i = 0; i < n; i++)
{
    s += a[i] * b[i];
}
Console.WriteLine(s);