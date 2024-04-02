int n = int.Parse(Console.ReadLine());
for(int j = 0; j < n; j++)
{
    for (int i = 0; i < n; i++)
    {
        Console.Write(i < n - j - 1 ? " " : "*");
    }
    Console.WriteLine();
}