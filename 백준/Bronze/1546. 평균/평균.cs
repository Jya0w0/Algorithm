int count = int.Parse(Console.ReadLine());

string[] s = Console.ReadLine().Split();
float[] scores = new float[s.Length];

float max = 0;
float average = 0f;

for (int i = 0; i < s.Length; i++)
{
    scores[i] = int.Parse(s[i]);
    if (scores[i] > max)
    {
        max = scores[i];
    }
}

for (int i = 0; i < count; i++)
{
    scores[i] = scores[i] / max * 100;
    average += scores[i] / count;
}
Console.WriteLine(average);