int n = int.Parse(Console.ReadLine());
int num = 666;
int count = 0;

while (count < n)
{
    if (num.ToString().Contains("666")) count++;
    num++;
}
Console.WriteLine(num - 1);