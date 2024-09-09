#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> days;
    for (int i = 0; i < progresses.size(); i++) 
    {
        int remainWork = 100 - progresses[i];
        int day = (remainWork + speeds[i] - 1) / speeds[i];
        days.push(day);
    }
    while (!days.empty())
    {
        int current = days.front();
        days.pop();
        int result = 1;
        while (!days.empty() && current >= days.front()) 
        {
            result++;
            days.pop();
        }
        answer.push_back(result);
    }
    return answer;
}