string[] s = Console.ReadLine().Split();
int m = int.Parse(s[0]);
int n = int.Parse(s[1]);
int tomato = 0;
int[,] box = new int[m + 1, n + 1];
Queue<(int x, int y)> q = new Queue<(int x, int y)>();
for (int i = 0; i < n; i++)
{
    string[] input = Console.ReadLine().Split();
    for (int j = 0; j < m; j++)
    {
        box[j, i] = int.Parse(input[j]);
        if (box[j, i] == 0) tomato++;
        if(box[j, i] == 1) q.Enqueue((j, i));
    }
}

int[] dx = { 0, 0, 1, -1 };
int[] dy = { 1, -1, 0, 0 };
int count = 0;
while (q.Count > 0)
{
    count++;
    int qCount = q.Count;
    for (int i = 0; i < qCount; i++)
    {
        (int x, int y) = q.Dequeue();
        for (int k = 0; k < 4; k++)
        {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
            if (box[nx, ny] == -1 || box[nx, ny] == 1) continue;
            box[nx, ny] = 1;
            tomato--;
            q.Enqueue((nx, ny));
        }
    }
}
Console.WriteLine(tomato != 0 ? -1 : count - 1);