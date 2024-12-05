#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<vector<int>> arr;
vector<bool> visited;

bool dfs(int node, int count) {
    if (count == 4) return true;

    visited[node] = true;
    for (int a : arr[node]) 
    {
        if (!visited[a]) {
            if (dfs(a, count + 1)) return true;
        }
    }
    visited[node] = false;
    return false;
}

int main() {
    cin >> n >> m;

    arr.resize(n);
    visited.resize(n);

    for (int i = 0; i < m; i++) 
    {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    for (int i = 0; i < n; i++) 
    {
        if (dfs(i, 0)) 
        {
            cout << 1;
            return 0;
        }
    }

    cout << 0;
    return 0;
}