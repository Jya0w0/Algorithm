#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = num_list.size() >= 11 ? 0 : 1;
    int length = num_list.size();
    for (int i = 0; i < length; i++)
    {
        if(length >= 11) answer += num_list[i];
        else answer *= num_list[i];
    }
    return answer;
}