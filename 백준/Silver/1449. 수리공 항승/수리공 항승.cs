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
Queue<int> q = new Queue<int>();
for(int i  = 0; i < point.Length; i++)
{
    q.Enqueue(point[i]);
}

int count = 0;
int a = q.Dequeue();
while (q.Count > 0)
{
    if (q.Peek() - a < l)
    {
        q.Dequeue();
    }
    else
    {
        count++;
        a = q.Dequeue();
    }
}
Console.WriteLine(count + 1);