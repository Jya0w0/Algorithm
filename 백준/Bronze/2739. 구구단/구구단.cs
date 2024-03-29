int n = int.Parse(Console.ReadLine());

for (int i = 1; i <= 9; i++)
{
    int answer = n * i;
    Console.WriteLine(n + " * " + i + " = " + answer);
}