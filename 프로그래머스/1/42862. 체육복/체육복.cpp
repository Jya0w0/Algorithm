#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    vector<int> new_lost, new_reserve;
    for (int l : lost) 
    {
        if (find(reserve.begin(), reserve.end(), l) != reserve.end()) 
        {
            reserve.erase(find(reserve.begin(), reserve.end(), l));
        }
        else 
        {
            new_lost.push_back(l);
        }
    }

    for (int r : reserve) 
    {
        if (find(lost.begin(), lost.end(), r) == lost.end()) 
        {
            new_reserve.push_back(r);
        }
    }

    answer = n - new_lost.size();

    for (int l : new_lost) 
    {
        if (find(new_reserve.begin(), new_reserve.end(), l - 1) != new_reserve.end()) 
        {
            new_reserve.erase(find(new_reserve.begin(), new_reserve.end(), l - 1));
            answer++;
        }
        else 
        {
            if (find(new_reserve.begin(), new_reserve.end(), l + 1) != new_reserve.end()) 
            {
                new_reserve.erase(find(new_reserve.begin(), new_reserve.end(), l + 1));
                answer++;
            }
        }
    }
    return answer;
}