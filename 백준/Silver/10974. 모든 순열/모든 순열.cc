#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
	cin >> n;
    vector<int> arr;

    for (int i = 1; i <= n; i++)
    {
        arr.push_back(i);
    }

    do {
        for (int a : arr)
        {
            cout << a << " ";
        }
        cout << "\n";
    } while (next_permutation(arr.begin(), arr.end()));

}