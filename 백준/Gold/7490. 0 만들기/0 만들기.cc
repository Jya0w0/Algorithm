#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int n;
vector<string> answer;

bool isZero(string s) {
    int sum = 0;
    int current = 0;
    char c = '+';

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            current = current * 10 + (s[i] - '0');
        }
        else if (s[i] == '+' || s[i] == '-')
        {
            sum += (c == '+') ? current : -current;
            current = 0;
            c = s[i];
        }
    }

    sum += (c == '+') ? current : -current;

    return sum == 0;
}

void dfs(int num, string arr) {
    if (num == n)
    {
        if (isZero(arr))
        {
            answer.push_back(arr);
        }
        return;
    }

    dfs(num + 1, arr + ' ' + to_string(num + 1));
    dfs(num + 1, arr + '+' + to_string(num + 1));
    dfs(num + 1, arr + '-' + to_string(num + 1));
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        answer.clear();
        dfs(1, "1");
        for (string a : answer)
        {
            cout << a << "\n";
        }
        cout << "\n";
    }

    return 0;
}