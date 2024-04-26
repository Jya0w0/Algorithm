int n = int.Parse(Console.ReadLine());
int[] nums = new int[n];
Stack<int> a = new Stack<int>();

for (int i = 0; i < n; i++)
{
    nums[i] = int.Parse(Console.ReadLine());
    if (nums[i] != 0)
    {
        a.Push(nums[i]);
    }
    else
    {
        a.Pop();
    }
}

int[] sum = a.ToArray();
int answer = 0;
for (int i = 0; i < a.Count; i++)
{
    answer += sum[i];
}
Console.WriteLine(answer);