string[] s1 = Console.ReadLine().Split();
string[] s2 = Console.ReadLine().Split();

int n = int.Parse(s1[0]);
int k = int.Parse(s1[1]);
Dictionary<string, int> nums = new Dictionary<string, int>();
int i = 0, j = 1, ans = 0;
nums[s2[i]] = 1;
nums[s2[j]] = 1;

while (true)
{
    if (nums[s2[j]] > k)
    {
        nums[s2[i]]--;
        i++;
    }
    else
    {
        ans = ans > j - i + 1 ? ans : j - i + 1;
        j++;

        if (j >= n)
            break;

        if (!nums.ContainsKey(s2[j]))
        {
            nums[s2[j]] = 0;
        }
        nums[s2[j]]++;
    }
}

Console.WriteLine(ans);