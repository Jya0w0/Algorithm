#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer = strArr;
    for (int i = 0; i < strArr.size(); i++)
    {
        for (int j = 0; j < strArr[i].size(); j++)
        {
            if(i % 2 == 0) answer[i][j] = tolower(answer[i][j]);
            else answer[i][j] = toupper(answer[i][j]);
        }
    }
    return answer;
}