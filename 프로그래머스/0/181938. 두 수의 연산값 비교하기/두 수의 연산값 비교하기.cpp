#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int num1 = stoi(to_string(a) + to_string(b));
    int num2 = 2 * a * b;
    if (num1 >= num2) answer = num1;
    else answer = num2;
    return answer;
}