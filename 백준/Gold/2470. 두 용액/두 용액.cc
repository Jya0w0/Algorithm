#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 2000000000

int main(void) {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int start = 0;
    int end = n - 1;
    int closeSum = MAX;
    vector<int> answer(2);
    while (start < end)
    {
        int sum = arr[start] + arr[end];

        if (abs(sum) < abs(closeSum))
        {
            closeSum = sum;
            answer[0 ]= arr[start];
            answer[1] = arr[end];
        }

        if (sum > 0) 
        {
            end--;
        }
        else 
        {
            start++;
        }
    }

    cout << answer[0] << " " << answer[1] << " ";
    
    return 0;
}