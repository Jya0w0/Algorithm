#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    int num = (my_string.size() + m - 1) / m;
    for (int i = 0; i < num; i++) 
    {
        int index = i * m + (c - 1);
        if (index < my_string.size()) 
        {
            answer.push_back(my_string[index]);
        }
    }
    return answer;
}