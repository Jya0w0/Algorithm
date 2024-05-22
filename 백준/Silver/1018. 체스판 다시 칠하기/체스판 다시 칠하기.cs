string[] s = Console.ReadLine().Split();
int n = int.Parse(s[0]);
int m = int.Parse(s[1]);

string[] board = new string[n];
for (int i = 0; i < n; i++)
{
    board[i] = Console.ReadLine();
}

int answer = 64;
for (int i = 0; i <= n - 8; i++)
{
    for (int j = 0; j <= m - 8; j++)
    {
        int caseW = 0;
        int caseB = 0;
        for (int k = i; k < i + 8; k++)
        {
            for (int l = j; l < j + 8; l++)
            {
                if ((k + l) % 2 == 0)
                {
                    if (board[k][l] != 'W') caseW++;
                    if (board[k][l] != 'B') caseB++;
                }
                else
                {
                    if (board[k][l] != 'B') caseW++;
                    if (board[k][l] != 'W') caseB++;
                }
            }
        }
        answer = Math.Min(answer, Math.Min(caseW, caseB));
    }
}
Console.WriteLine(answer);