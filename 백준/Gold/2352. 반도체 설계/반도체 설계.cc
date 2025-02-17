#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> ports(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> ports[i];
    }

    vector<int> arr;
    for (int i = 1; i <= n; i++)
    {
        auto it = lower_bound(arr.begin(), arr.end(), ports[i]);
        if (it == arr.end())
        {
            arr.push_back(ports[i]);
        }
        else
        {
            *it = ports[i];
        }
    }
    cout << arr.size();

    return 0;
}