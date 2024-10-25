#include <string>
#include <vector>

using namespace std;

int solution(vector<int> diffs, vector<int> times, long long limit) {
    int left = 1;
    int right = 100000;
    int answer = right;
    while (left <= right)
    {
        int level = (left + right) / 2;
        long long total_time = 0;
        for (int i = 0; i < diffs.size(); i++)
        {
            int diff = diffs[i];
            int time_cur = times[i];
            int time_prev = (i == 0) ? 0 : times[i - 1];
            if (diff <= level)
            {
                total_time += time_cur;
            }
            else
            {
                total_time += (long long)(diff - level) * (time_cur + time_prev) + time_cur;
            }

            if (total_time > limit) 
            {
                break;
            }
        }
        if (total_time <= limit) 
        {
            answer = level;
            right = level - 1;
        }
        else left = level + 1;
    }
    return answer;
}