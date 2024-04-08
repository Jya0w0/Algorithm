Dictionary<int, int> nums = new Dictionary<int, int> ();

for(int i = 0; i < 10; i++)
{
    int num = int.Parse(Console.ReadLine()) % 42;
    if (!nums.ContainsKey(num))
    {
        nums.Add(num, 1);
    }
}

Console.WriteLine(nums.Count);