#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> weights(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> weights[i];
    }
    sort(weights.begin(), weights.end());

    int sum = 1;
    for (int i = 0; i < n; i++) 
    {
        if (weights[i] > sum) break;
        sum += weights[i];
    }

    cout << sum;

    return 0;
}