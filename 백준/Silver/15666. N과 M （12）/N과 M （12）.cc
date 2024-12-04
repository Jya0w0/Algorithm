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

    int dupulicate = 10001;
    for (int i = index; i < n; i++) 
    {
        if (!visited[i] && nums[i] != dupulicate)
        {
            visited[i] = true;
            arr.push_back(nums[i]);
            visited[i] = false;
            dupulicate = nums[i];
            dfs(i);
            arr.pop_back();
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