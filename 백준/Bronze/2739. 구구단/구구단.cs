int n = int.Parse(Console.ReadLine());
int i = 0;
while(i++ < 9)
{
    int answer = n * i;
    Console.WriteLine(n + " * " + i + " = " + answer);
}