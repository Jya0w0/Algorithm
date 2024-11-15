#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 1299709;
vector<bool> sieve(MAX + 1, true);
vector<int> primes;

void isPrime() {
    sieve[0] = sieve[1] = false;
    for (int i = 2; i * i <= MAX; ++i) 
    {
        if (sieve[i]) 
        {
            for (int j = i * i; j <= MAX; j += i) 
            {
                sieve[j] = false;
            }
        }
    }

    for (int i = 2; i <= MAX; ++i) {
        if (sieve[i]) {
            primes.push_back(i);
        }
    }
}

int main(void) {
    isPrime();

    int t, k;
    cin >> t;

    vector<int> answer;

    while (t--) 
    {
        cin >> k;
        if (sieve[k]) 
        {
            answer.push_back(0);
            continue;
        }

        int index = lower_bound(primes.begin(), primes.end(), k) - primes.begin();
        int start = primes[index - 1];
        int endN = primes[index];

        answer.push_back(endN - start);
    }

    for (int a : answer)
    {
        cout << a << '\n';
    }
    
    return 0;
}