#include <iostream>
#include <vector>
using namespace std;

int numberOfCase(int n, int m) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= (m - i);
        result /= (i + 1);
    }
    return result;
}

int main() {
    int t, n, m;
    cin >> t;

    vector<int> answer;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        answer.push_back(numberOfCase(n, m));
    }

    for (int a : answer)
    {
        cout << a << "\n";
    }

    return 0;
}