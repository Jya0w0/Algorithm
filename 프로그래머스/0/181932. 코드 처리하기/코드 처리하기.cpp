#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;

    for (size_t idx = 0; idx < code.size(); idx++) {
        char c = code[idx];
        if (mode == 0) {
            if (c == '1') {
                mode = 1;
            }
            else if (idx % 2 == 0) {
                answer += c;
            }
        }
        else if (mode == 1) {
            if (c == '1') {
                mode = 0;
            }
            else if (idx % 2 == 1) {
                answer += c;
            }
        }
    }
    return answer.empty() ? "EMPTY" : answer;
}