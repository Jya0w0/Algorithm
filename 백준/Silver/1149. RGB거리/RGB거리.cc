#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> cost(n + 1, vector<int>(3));
    vector<vector<int>> dp(n + 1, vector<int>(3));

    for (int i = 1; i <= n; i++) 
    {
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
    }

    dp[1][0] = cost[1][0];
    dp[1][1] = cost[1][1];
    dp[1][2] = cost[1][2];

    for (int i = 2; i <= n; i++) {
        dp[i][0] = cost[i][0] + min(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = cost[i][1] + min(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = cost[i][2] + min(dp[i - 1][0], dp[i - 1][1]);
    }

    int result = min({ dp[n][0], dp[n][1], dp[n][2] });
    cout << result << endl;

    return 0;
}