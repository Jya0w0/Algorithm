#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> result;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        
        vector<int> x(n);
        for (int j = 0; j < n; j++)
        {
            cin >> x[j];
        }

        int maxSum = x[0];
        int current = x[0];

        for (int j = 1; j < n; j++)
        {
            current = max(x[j], current + x[j]);
            maxSum = max(current, maxSum);
        }

        result.push_back(maxSum);
    }

    for (int r : result)
    {
        cout << r << "\n";
    }

    return 0;
}