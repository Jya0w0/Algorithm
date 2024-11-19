#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int x;
    cin >> x;

    int start = 0;
    int end = n - 1;
    int count = 0;
    while (start < end)
    {
        int sum = arr[start] + arr[end];
        if (sum == x) 
        {
            count++;
            start++;
            end--;
        }
        else if (sum < x) 
        {
            start++;
        }
        else 
        {
            end--;
        }
    }

    cout << count;
    
    return 0;
}