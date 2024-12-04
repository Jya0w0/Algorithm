#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> nums;
vector<int> arr;

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
    for (int i = index; i < n; i++) 
    {
        if (duplicate != nums[i])
        {
            arr.push_back(nums[i]);
            duplicate = nums[i];
            dfs(i + 1);
            arr.pop_back();
        }
    }
}

int main() {
    cin >> n >> m;

    nums.resize(n); 

    for (int i = 0; i < n; i++) 
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    dfs(0);
    return 0;
}