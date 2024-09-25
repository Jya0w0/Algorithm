#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for (auto str : intStrs)
    {
        string ss;
        int num;
        for (int i = s; i < s + l; i++) 
        {
            ss += str[i];
        }
        num = stoi(ss);

        if (num > k) answer.push_back(num);
    }
    return answer;
}