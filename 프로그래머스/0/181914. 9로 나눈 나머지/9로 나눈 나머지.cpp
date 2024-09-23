#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    for (char c : number)
    {
        answer += c - 48;
    }
    return answer % 9;
}