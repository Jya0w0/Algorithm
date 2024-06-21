int n = int.Parse(Console.ReadLine());
(int x, int y)[] l = new (int, int)[n];
for (int i = 0; i < n; i++)
{
    string[] input = Console.ReadLine().Split();
    l[i] = (int.Parse(input[0]), int.Parse(input[1]));
}
l = l.OrderBy(a => a.y).ThenBy(a => a.x).ToArray();
int count = 0;
int endTime = 0;
for (int i = 0; i < n; i++)
{
    if (endTime <= l[i].x)
    {
        endTime = l[i].y;
        count++;
    }
}
Console.WriteLine(count);