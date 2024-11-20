#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) return false;
    }
    return true;
}

int main(void) {
    int n;
    cin >> n;

    vector<int> arr;
    for (int i = 0; i <= n; ++i)
    {
        if (isPrime(i)) arr.push_back(i);
    }

    int start = 0;
    int end = 0;
    int sum = 0;
    int count = 0;
    while (true) 
    {
        if (sum >= n) 
        {
            sum -= arr[start++];
        }
        else if (end == arr.size()) 
        {
            break;
        }
        else 
        {
            sum += arr[end++];
        }

        if (sum == n) count++;
    }

    cout << count;
    
    return 0;
}