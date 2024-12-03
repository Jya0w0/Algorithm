#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> nums;
vector<int> arr;
vector<bool> visited;

void dfs(int index) {
    if (index == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) 
    {
        if (!visited[i]) 
        {
            visited[i] = true;
            arr.push_back(nums[i]);
            dfs(index + 1);
            arr.pop_back();
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;

    nums.resize(n);
    visited.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    dfs(0);

    return 0;
}