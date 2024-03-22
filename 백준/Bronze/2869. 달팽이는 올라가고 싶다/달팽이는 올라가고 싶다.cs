string[] s = Console.ReadLine().Split();
int A = int.Parse(s[0]);
int B = int.Parse(s[1]);
int V = int.Parse(s[2]);

int day = 1;
if (V - A == 0)
{
    day += 0;
}
else if((V - A) / (A - B) == 0)
{
    day += 1;
}
else
{
    day += (V - A) / (A - B);
    if ((V - A) % (A - B) != 0)
    {
        day += 1;
    }
}

Console.WriteLine(day);