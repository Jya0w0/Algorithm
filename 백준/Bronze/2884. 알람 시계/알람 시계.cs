string[] s = Console.ReadLine().Split();
int h = int.Parse(s[0]);
int m = int.Parse(s[1]);

if (m < 45)
{
    h--;
    m += 15;

    if (h < 0)
    {
        h = 23;
    }
}
else
{
    m -= 45;
}

Console.WriteLine("{0} {1}", h, m);