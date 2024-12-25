#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> box(n);
    for (int i = 0; i < n; i++)
    {
        cin >> box[i];
    }

    vector<int> dp(n, 1);
    for (int i = 1; i < n; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            if (box[j] < box[i]) 
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    cout << *max_element(dp.begin(), dp.end());

    return 0;
}