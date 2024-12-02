#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> arr;

void dfs(int index, int start) {
    if (index == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        arr[index] = i;
        dfs(index + 1, i);
    }
}

int main() {
    cin >> n >> m;

    arr.resize(m);

    dfs(0, 1);

    return 0;
}
