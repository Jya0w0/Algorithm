#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;

    vector<int> trees(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> trees[i];
    }

    int left = 0;
    int right = *max_element(trees.begin(), trees.end());
    int h = 0;
    while (left <= right) 
    {
        int mid = (left + right) / 2;
        long long wood = 0;
        for (int t : trees) 
        {
            if (t > mid) wood += t - mid;
        }

        if (wood >= m) 
        {
            h = mid;
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }
    }
    cout << h << endl;
    return 0;
}