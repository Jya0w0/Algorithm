int count = int.Parse(Console.ReadLine());

string[] s = Console.ReadLine().Split();
double[] scores = new double[s.Length];

double max = 0d;
double average = 0d;

for (int i = 0; i < count; i++)
{
    scores[i] = int.Parse(s[i]);
    if (scores[i] > max)
    {
        max = scores[i];
    }
    scores[i] = scores[i] * 100;
    average += scores[i];

}

//for (int i = 0; i < count; i++)
//{
//    scores[i] = scores[i] / max * 100;
//    average += scores[i] / count;
//}
Console.WriteLine(average / max / count);