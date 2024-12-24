#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> map(n + 1, vector<int>(m + 1));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> map[i][j];
        }
    }

    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    dp[1][1] = map[1][1];
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= m; j++) 
        {
            int answer = 0;
            if (i > 1) answer = max(answer, dp[i - 1][j]);
            if (j > 1) answer = max(answer, dp[i][j - 1]);
            if (i > 1 && j > 1) answer = max(answer, dp[i - 1][j - 1]);
            dp[i][j] = answer + map[i][j];
        }
    }

    cout << dp[n][m] << "\n";

    return 0;
}