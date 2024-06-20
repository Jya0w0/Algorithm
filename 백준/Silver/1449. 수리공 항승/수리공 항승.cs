string[] s = Console.ReadLine().Split();
string[] ss = Console.ReadLine().Split();
int n = int.Parse(s[0]);
int l = int.Parse(s[1]);
int[] point = new int[n];
for (int i = 0; i < n; i++)
{
    point[i] = int.Parse(ss[i]);
}
Array.Sort(point);
float fix = point[0] - 0.5f;
int count = 0;
for (int i = 0; i < n; i++)
{
    if ((float)(fix + l) < point[i])
    {
        fix = point[i] - 0.5f;
        count++;
    }
}
Console.WriteLine(count + 1);