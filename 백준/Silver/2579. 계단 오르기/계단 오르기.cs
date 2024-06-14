int n = int.Parse(Console.ReadLine());
int[] score = new int[n + 2];
for (int i = 1; i <= n; i++)
{
    score[i] = int.Parse(Console.ReadLine());
}

int[] step = new int[n + 2];
step[1] = score[1];
step[2] = score[1] + score[2];
for (int i = 3; i <= n; ++i)
{
    int oneStep = step[i - 2] + score[i];
    int twoStep = step[i - 3] + score[i - 1] + score[i];
    step[i] = Math.Max(oneStep, twoStep);
}
Console.WriteLine(step[n]);