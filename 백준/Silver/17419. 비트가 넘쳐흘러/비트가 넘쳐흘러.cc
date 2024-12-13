#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string k;
    cin >> n >> k;

    int answer = count(k.begin(), k.end(), '1');
    cout << answer;

    return 0;
}