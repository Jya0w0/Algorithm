#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    int a = -1;
    int b = -1;
    for (int i = 0; i < str_list.size(); i++) 
    {
        if (str_list[i] == "l" && a == -1) 
        {
            a = i;
            break;
        }
        if (str_list[i] == "r" && b == -1) {
            b = i;
            break;
        }
    }

    if (a != -1) 
    {
        for (int i = 0; i < a; i++) 
        {
            answer.push_back(str_list[i]);
        }
    }
    else if (b != -1) 
    {
        for (int i = b + 1; i < str_list.size(); i++) 
        {
            answer.push_back(str_list[i]);
        }
    }
    return answer;
}