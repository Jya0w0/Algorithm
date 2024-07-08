using System;
using System.Collections;
using System.Collections.Generic;

public class Solution {
    public long solution(int[] weights) {
        long answer = 0;
        Dictionary<int, int> dic = new Dictionary<int, int>();
        Dictionary<int, int> dic2 = new Dictionary<int, int>();
        for (int i = 0; i < weights.Length; i++)
        {
            int[] distanceWeights = { weights[i] * 2, weights[i] * 3, weights[i] * 4 };

            foreach (int distanceWeight in distanceWeights)
            {
                if (dic.ContainsKey(distanceWeight))
                {
                    answer += dic[distanceWeight];
                    dic[distanceWeight]++;
                }
                else
                {
                    dic[distanceWeight] = 1;
                }
            }

            if (dic2.ContainsKey(weights[i]))
            {
                answer -= dic2[weights[i]] * 2;
            }

            if (dic2.ContainsKey(weights[i]))
            {
                dic2[weights[i]]++;
            }
            else
            {
                dic2[weights[i]] = 1;
            }
        }
        return answer;
    }
}