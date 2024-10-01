#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for (int i = 0; i < 52; i++)
    {
        answer.push_back(0);
    }
    for (char str : my_string)
    {
        if (str >= 'A' && str <= 'Z') answer[str - 'A']++;
        else if (str >= 'a' && str <= 'z') answer[str - 'a' + 26]++;
    }
    return answer;
}