int n = int.Parse(Console.ReadLine());
char a = ' ';
char b = '*';
for(int j = 0; j < n; j++)
{
    for (int i = 0; i < n; i++)
    {
        Console.Write(i < n - j - 1 ? a : b);
    }
    Console.WriteLine();
}