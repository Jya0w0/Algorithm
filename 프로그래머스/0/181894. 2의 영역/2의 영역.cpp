#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int a = -1;
    int b = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 2)
        {
            if (a == -1) a = i;
            b = i;
        }
    }
    if (a == -1) return { -1 };
    return answer = vector<int>(arr.begin() + a, arr.begin() + b + 1);
}