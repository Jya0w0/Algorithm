#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> answer(t);
    for (int i = 0; i < t; i++)
    {
        int n, m, k;
        cin >> n >> m >> k;
        
        vector<int> arr(n);
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[j];
        }

        int count = 0;
        if (sum < k)
        {
            count++;
        }

        for (int j = m; j < n + m - 1; j++)
        {
            if (n == m) continue;
            sum += arr[j % n] - arr[(j - m) % n];
            if (sum < k)
            {
                count++;
            }
        }
        answer[i] = count;
    }

    for (int a : answer)
    {
        cout << a << "\n";
    }

    return 0;
}