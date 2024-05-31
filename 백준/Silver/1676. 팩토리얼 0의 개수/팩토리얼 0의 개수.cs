int n = int.Parse(Console.ReadLine());
int count = 0;

while (n >= 5)
{
    count += n / 5;
    n /= 5;
}
Console.WriteLine(count);