#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> teleportPoles(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> teleportPoles[i];
    }

    vector<int> arr;
    for (int i = 1; i <= n; i++)
    {
        auto it = lower_bound(arr.begin(), arr.end(), teleportPoles[i]);
        if (it == arr.end())
        {
            arr.push_back(teleportPoles[i]);
        }
        else
        {
            *it = teleportPoles[i];
        }
    }
    cout << n - arr.size();

    return 0;
}