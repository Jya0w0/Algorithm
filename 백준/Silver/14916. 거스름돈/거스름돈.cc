#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = n / 5;
    int current = n % 5;

    while (count >= 0)
    {
        if (current % 2 == 0) 
        {
            cout << count + (current / 2);
            return 0;
        }
        count--;
        current = n - (count * 5);
    }

    cout << -1;

    return 0;
}