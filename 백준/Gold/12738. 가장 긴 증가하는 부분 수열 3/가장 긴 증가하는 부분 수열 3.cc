#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a.push_back(num);
    }

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(arr.begin(), arr.end(), a[i]);
        if (it == arr.end()) arr.push_back(a[i]);
        else *it = a[i];
    }
    cout << arr.size();

    return 0;
}