#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, c;
vector<long long> arr;
vector<long long> sum;
int answer = 0;

void setSum(int idx, int end, long long weight, vector<long long>& sub) {
    if (idx == end) 
    {
        sub.push_back(weight);
        return;
    }
    setSum(idx + 1, end, weight, sub);
    if (weight + arr[idx] <= c) 
    {
        setSum(idx + 1, end, weight + arr[idx], sub);
    }
}

void solve() {
    vector<long long> left, right;
    setSum(0, n / 2, 0, left);
    setSum(n / 2, n, 0, right);
    sort(right.begin(), right.end());
    for (long long w : left) 
    {
        int count = upper_bound(right.begin(), right.end(), c - w) - right.begin();
        answer += count;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> c;
    arr.resize(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    solve();
    cout << answer;

    return 0;
}