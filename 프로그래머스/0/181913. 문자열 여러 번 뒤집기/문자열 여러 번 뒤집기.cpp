#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    for (auto q : queries) {
        int s = q[0];
        int e = q[1];

        reverse(my_string.begin() + s, my_string.begin() + e + 1);
    }
    return answer = my_string;
}