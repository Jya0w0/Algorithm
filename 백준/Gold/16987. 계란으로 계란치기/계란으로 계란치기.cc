#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
    
int n;
vector<pair<int, int>> eggs;
int answer = 0;

void dfs(int current) {
    if (current == n) 
    {
        int count = 0;
        for (int i = 0; i < n; i++) 
        {
            if (eggs[i].first <= 0) 
            {
                count++;
            }
        }
        answer = max(answer, count);
        return;
    }

    if (eggs[current].first <= 0) 
    {
        dfs(current + 1);
        return;
    }

    bool isVisited = false;
    for (int i = 0; i < n; i++) 
    {
        if (i != current && eggs[i].first > 0) 
        {
            isVisited = true;
            eggs[current].first -= eggs[i].second;
            eggs[i].first -= eggs[current].second;

            dfs(current + 1);

            eggs[current].first += eggs[i].second;
            eggs[i].first += eggs[current].second;
        }
    }

    if (!isVisited) 
    {
        dfs(current + 1);
    }
}

int main() {
    cin >> n;
    eggs.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> eggs[i].first >> eggs[i].second;
    }
    dfs(0); 
    cout << answer;

    return 0;
}