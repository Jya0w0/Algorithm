#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string n;
    cin >> n;

    vector<int> count(10);

    for (char c : n) 
    {
        count[c - '0']++;
    }

    count[6] = (count[6] + count[9] + 1) / 2;
    count[9] = 0;

    int answer = *max_element(count.begin(), count.end());

    cout << answer;

    return 0;
}