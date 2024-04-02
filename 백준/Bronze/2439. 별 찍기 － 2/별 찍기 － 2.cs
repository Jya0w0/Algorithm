int n = int.Parse(Console.ReadLine());
for(int k = 0; k < n; k++)
{
    for (int i = 0; i < n - k - 1; i++)
    {
        Console.Write(" ");
    }
    for (int j = 0; j <= k; j++)
    {
        Console.Write("*");
    }
    Console.WriteLine();
}