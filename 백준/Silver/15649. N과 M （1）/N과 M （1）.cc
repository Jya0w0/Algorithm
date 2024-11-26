#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> currentArr;
vector<bool> isVisited;

void backtrack() {
    if (currentArr.size() == m) 
    {
        for (int n : currentArr) 
        {
            cout << n << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= n; i++) 
    {
        if (!isVisited[i])
        {
            isVisited[i] = true;
            currentArr.push_back(i);
            backtrack();
            currentArr.pop_back();
            isVisited[i] = false;
        }
    }
}

int main()
{
    cin >> n >> m;

    isVisited.resize(n + 1);
    backtrack();

    return 0;
}