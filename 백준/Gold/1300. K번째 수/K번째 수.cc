#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long n, k;

long long countNum(long long x) {
    long long count = 0;
    for (long long i = 1; i <= n; i++)
    {
        count += min(n, x / i);
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    long long left = 1, right = k, answer = 0;
    while (left <= right)
    {
        long long mid = (left + right) / 2;
        if (countNum(mid) >= k)
        {
            answer = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << answer;

    return 0;
}