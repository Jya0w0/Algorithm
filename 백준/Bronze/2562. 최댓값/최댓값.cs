int[] nums = new int[9];
int max = 0;
int count = 0;

for(int i = 0; i < 9; i++)
{
    nums[i] = int.Parse(Console.ReadLine());
    if (nums[i] > max)
    {
        max = nums[i];
        count = i + 1;
    }
}

Console.WriteLine(max);
Console.WriteLine(count);