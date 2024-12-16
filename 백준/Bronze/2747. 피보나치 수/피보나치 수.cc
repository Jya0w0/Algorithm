#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1;
    int current = 0;
    for (int i = 2; i <= n; i++) 
    {
        current = a + b;
        a = b;
        b = current;
    }
    return current;
}

int main() {
    int n;
    cin >> n;

    cout << fibonacci(n);

    return 0;
}