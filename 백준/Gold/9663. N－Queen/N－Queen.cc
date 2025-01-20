#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n;
int answer = 0;
vector<int> arr;
bool isSafe(int x, int y) {
    for (int i = 0; i < x; i++)
    {
        if (arr[i] == y || abs(arr[i] - y) == abs(i - x))
        {
            return false;
        }
    }
    return true;
}

void dfs(int index) {
    if (index == n)
    {
        answer++;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (isSafe(index, i))
        {
            arr[index] = i;
            dfs(index + 1);
            arr[index] = -1;
        }
    }
}

int main() {
    cin >> n;

    arr.resize(n);

    dfs(0);
    cout << answer;

    return 0;
}