#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

string solution(string my_string, vector<int> indices) {
    string answer = "";
    sort(indices.begin(), indices.end(), compare);
    for (int i : indices)
    {
        my_string.erase(my_string.begin() + i);
    }
    return answer = my_string;
}