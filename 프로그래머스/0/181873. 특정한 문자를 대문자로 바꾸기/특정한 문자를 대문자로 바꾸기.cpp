#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string my_string, string alp) {
    string answer = my_string;
    for (int i = 0; i < my_string.size(); i++)
    {
        if (my_string[i] == alp[0]) answer[i] = toupper(my_string[i]);
    }
    return answer;
}