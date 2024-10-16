#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
    transform(pat.begin(), pat.end(), pat.begin(), ::tolower);

    return answer = myString.find(pat) != string::npos ? 1 : 0;
}