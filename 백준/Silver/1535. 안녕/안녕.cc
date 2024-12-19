#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> hp(n);
    vector<int> joy(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> hp[i];
    }

    for (int i = 0; i < n; i++) 
    {
        cin >> joy[i];
    }

    vector<int> dp(101);

    for (int i = 0; i < n; ++i) 
    {
        for (int j = 100; j > hp[i]; j--) 
        {
            dp[j] = max(dp[j], dp[j - hp[i]] + joy[i]);
        }
    }

    int answer = 0;
    for (int i = 1; i <= 100; i++) 
    {
        answer = max(answer, dp[i]);
    }

    cout << answer;

    return 0;
}
