#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int n = 0;
    while((n = myString.find(pat, n)) != string::npos)
    {
        answer++;
        n++;
    }
    return answer;
}