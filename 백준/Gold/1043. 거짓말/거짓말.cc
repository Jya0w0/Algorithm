#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);
    vector<vector<int>> parties(m);
    vector<bool> isTruther(n + 1);

    int tCount;
    cin >> tCount;
    vector<int> truthers(tCount);
    for (int i = 0; i < tCount; i++) 
    {
        cin >> truthers[i];
        isTruther[truthers[i]] = true;
    }

    for (int i = 0; i < m; i++) 
    {
        int count;
        cin >> count;
        parties[i].resize(count);

        for (int j = 0; j < count; j++) 
        {
            cin >> parties[i][j];
        }

        for (int j = 0; j < count; j++) 
        {
            for (int k = j + 1; k < count; k++) 
            {
                graph[parties[i][j]].push_back(parties[i][k]);
                graph[parties[i][k]].push_back(parties[i][j]);
            }
        }
    }

    vector<bool> visited(n + 1, false);
    queue<int> q;
    for (int t : truthers) 
    {
        if (!visited[t]) 
        {
            q.push(t);
            visited[t] = true;
        }
    }

    while (!q.empty()) 
    {
        int person = q.front();
        q.pop();

        for (int neighbor : graph[person]) 
        {
            if (!visited[neighbor]) 
            {
                visited[neighbor] = true;
                isTruther[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    int answer = 0;
    for (auto party : parties) 
    {
        bool canLie = true;

        for (int p : party) 
        {
            if (isTruther[p]) 
            {
                canLie = false;
                break;
            }
        }

        if (canLie) 
        {
            answer++;
        }
    }

    cout << answer;
    return 0;
}