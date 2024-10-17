#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = myString;
    for (int i = 0; i < myString.size(); i++)
    {
        if (myString[i] == 'a' || myString[i] == 'A') answer[i] = toupper(myString[i]);
        else answer[i] = tolower(myString[i]);
    }
    return answer;
}