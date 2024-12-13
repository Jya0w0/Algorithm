#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k = 0;
    string str = "";
    cin >> str;
    for (char c : str)
    {
        k = (c - '0') | (k << 1);
    }

    int count = 0;
    while (k != 0)
    {
        k = k - (k & ((~k) + 1));
        count++;
    }
    cout << count;

    return 0;
}