#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<vector<int>> dp;

void dfs(int x, int num, int next, int y) {
    if (x == n) 
    {
        dp[y + 1][next] = (dp[y + 1][next] + dp[y][num]) % 9901;
        return;
    }

    if (num & (1 << x)) 
    {
        dfs(x + 1, num, next, y);
    }
    else 
    {
        if (x + 1 < n && !(num & (1 << (x + 1)))) 
        {
            dfs(x + 2, num, next, y);
        }
        dfs(x + 1, num, next | (1 << x), y);
    }
}

int solve() {
    dp.assign(m + 1, vector<int>(1 << n, 0));
    dp[0][0] = 1;

    for (int col = 0; col < m; col++) 
    {
        for (int mask = 0; mask < (1 << n); mask++) 
        {
            if (dp[col][mask] > 0) {
                dfs(0, mask, 0, col);
            }
        }
    }

    return dp[m][0];
}

int main() {
    cin >> n >> m;

    if ((n * m) % 2 == 1) 
    {
        cout << 0 << endl;
        return 0;
    }

    cout << solve();

    return 0;
}