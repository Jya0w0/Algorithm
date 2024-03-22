int kg = int.Parse(Console.ReadLine());
int count = 0;

while (kg > 0)
{
    if (kg % 5 == 0)
    {
        count += kg / 5;
        break;
    }
    else
    {
        kg -= 3;
        count++;
    }
}
if (kg < 0) count = -1;

Console.WriteLine(count);