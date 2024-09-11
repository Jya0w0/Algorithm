#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (auto query : queries)
    {
        int s = query[0];
        int e = query[1];
        int k = query[2];
        int minValue = -1;
        bool found = false;

        for (int i = s; i <= e; i++)
        {
            if (arr[i] > k)
            {
                if (!found || arr[i] < minValue)
                {
                    minValue = arr[i];
                    found = true;
                }
            }
        }

        answer.push_back(found ? minValue : -1);
    }
    return answer;
}