#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    vector<int> bottom(h + 1);
    vector<int> top(h + 1);
    for (int i = 0; i < n; i++) 
    {
        int height;
        cin >> height;
        i % 2 == 0 ? bottom[height]++ : top[height]++;
    }

    for (int i = h - 1; i >= 1; i--)
    {
        bottom[i] += bottom[i + 1];
        top[i] += top[i + 1];
    }

    int a = n;
    int b = 0;
    for (int i = 1; i <= h; i++)
    {
        int count = bottom[i] + top[h - i + 1];
        if (count < a)
        {
            a = count;
            b = 1;
        }
        else if (count == a) b++;
    }

    cout << a << " " << b;

    return 0;
}