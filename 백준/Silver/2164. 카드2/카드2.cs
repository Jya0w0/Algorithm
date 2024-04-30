int n = int.Parse(Console.ReadLine());
Queue<int> card = new Queue<int>();

for (int i = 0; i < n; i++)
{
    card.Enqueue(i+1);
}

while (card.Count != 1)
{
    card.Dequeue();
    int add = card.Dequeue();
    card.Enqueue(add);
}
Console.WriteLine(card.Dequeue().ToString());