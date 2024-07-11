int n = int.Parse(Console.ReadLine());
int count = 0;
for(int i = 0; i < n; i++)
{
    string input = Console.ReadLine();
    int len = input.Length;
    Stack<char> word = new Stack<char>();
    word.Push(input[0]);
    for(int j = 1; j < len; j++)
    {
        if (len % 2 != 0) break;
        if (word.Count == 0) word.Push(input[j]);
        else if (word.Peek() == input[j]) word.Pop();
        else word.Push(input[j]);
    }
    if(word.Count == 0) count++;
}
Console.WriteLine(count);