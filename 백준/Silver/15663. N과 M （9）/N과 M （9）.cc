#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> nums;
vector<int> arr;
vector<bool> visited;

void dfs(int index) {
    if (arr.size() == m) 
    {
        for (int i = 0; i < m; i++) 
        {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    int duplicate = 10001;
    for (int i = 0; i < n; i++) 
    {
        if (!visited[i] && duplicate != nums[i])
        {
            visited[i] = true;
            arr.push_back(nums[i]);
            duplicate = nums[i];
            dfs(i + 1);
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