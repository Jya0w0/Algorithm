#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int >> dp(k + 1, vector<int>(n + 1));

    for (int i = 0; i <= k; i++) 
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= k; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000000;
        }
    }

    cout << dp[k][n];

    return 0;
}