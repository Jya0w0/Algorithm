using System;
using System.Linq;

public class Solution {
    public string solution(string s) {
        string answer = "";
        string[] ss = s.Split();
        int[] nums = new int[ss.Length];

        for (int i = 0; i < ss.Length; i++)
        {
            nums[i] = int.Parse(ss[i]);
        }
        answer = $"{nums.Min()} {nums.Max()}";
        return answer;
    }
}