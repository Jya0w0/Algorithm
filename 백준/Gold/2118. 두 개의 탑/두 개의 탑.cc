#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    int total = 0;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        total += arr[i];
    }

    int maxSum = 0;
    for (int i = 0; i < n; i++) 
    {
        int current = 0;
        for (int j = i + 1; j < n; j++)
        {
            current += arr[j];
            int a = current;
            int b = total - a;

            int num = min(a, b);
            maxSum = max(maxSum, num);
        }
    }

    cout << maxSum;
    return 0;
}
