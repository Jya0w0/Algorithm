#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> dp(n + 1);
    dp[0] = 1;

    for (int i = 1; i <= n; i++) 
    {
        dp[i] = dp[i - 1];

        if (i >= m) 
        {
            dp[i] = (dp[i] + dp[i - m]) % 1000000007;
        }
    }

    cout << dp[n];

    return 0;
}