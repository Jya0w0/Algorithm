#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> answer;
    while (t--) 
    {
        int n;
        cin >> n;

        vector<int> coins(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> coins[i];
        }

        int m;
        cin >> m;

        vector<int> dp(m + 1);
        dp[0] = 1;

        for (int coin : coins) 
        {
            for (int i = coin; i <= m; i++) 
            {
                dp[i] += dp[i - coin];
            }
        }

        answer.push_back(dp[m]);
    }

    for (int a : answer)
    {
        cout << a << "\n";
    }

    return 0;
}