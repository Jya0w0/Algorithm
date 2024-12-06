#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> arr;

bool isGoodSequence() {
    int len = arr.size();
    for (int i = 1; i <= len / 2; i++) {
        if (equal(arr.end() - i, arr.end(), arr.end() - 2 * i)) 
        {
            return false;
        }
    }
    return true;
}

bool dfs(int count) {
    if(count == n) 
    {
        for (int a : arr) 
        {
            cout << a;
        }
        return true;
    }

    for (int i = 1; i <= 3; i++) {
        arr.push_back(i);
        if (isGoodSequence()) 
        {
            if(dfs(count + 1)) return true;
        }
        arr.pop_back();
    }
    return false;
}

int main() {
    cin >> n;

    dfs(0);
    return 0;
}