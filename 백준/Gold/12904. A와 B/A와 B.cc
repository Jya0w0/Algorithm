#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    while (t.length() > s.length())
    {
        if (t.back() == 'A') 
        {
            t.pop_back();
        }
        else if (t.back() == 'B')
        {
            t.pop_back();
            reverse(t.begin(), t.end());
        }
    }

    cout << (s == t) ? 1 : 0;

    return 0;
}