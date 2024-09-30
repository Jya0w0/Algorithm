#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    for (int i = r; i < code.size(); i += q) 
    {
        answer.push_back(code[i]);
    }
    return answer;
}