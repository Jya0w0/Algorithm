#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long n, k;
vector<long long> amounts;

bool isDivided(long long amount) {
    long long count = 0;
    for (long long a : amounts)
    {
        count += a / amount;
    }
    return count >= k;
}

long long binarySearch() {
    long long start = 1;
    long long end = *max_element(amounts.begin(), amounts.end());
    long long answer = 0;

    while (start <= end)
    {
        long long mid = (start + end) / 2;

        if (isDivided(mid))
        {
            answer =  mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return answer;
}

int main(void) {
    cin >> n >> k;
    amounts.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> amounts[i];
    }

    cout << binarySearch();

    return 0;
}