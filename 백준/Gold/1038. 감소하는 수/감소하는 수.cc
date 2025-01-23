#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> arr;

void decreaseNum(int len, long long current, int num) {
    arr.push_back(current);
    for (int i = num - 1; i >= 0; i--) 
    {
        decreaseNum(len + 1, current * 10 + i, i);
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= 9; i++) 
    {
        decreaseNum(1, i, i);
    }
    sort(arr.begin(), arr.end());

    if (n < arr.size()) 
    {
        cout << arr[n];
    }
    else 
    {
        cout << -1;
    }

    return 0;
}