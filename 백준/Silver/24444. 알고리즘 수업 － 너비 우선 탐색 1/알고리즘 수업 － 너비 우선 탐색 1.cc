#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


int main(void) {
    int n, m, r;
    cin >> n >> m >> r;
    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++) 
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    queue<int> q;
    vector<bool> visited(n + 1);
    vector<int> orders(n + 1);
    int order = 1;
    q.push(r);
    visited[r] = true;
    orders[r] = order;

    while (!q.empty())
    {
        int currentNode = q.front();
        q.pop();
        sort(graph[currentNode].begin(), graph[currentNode].end());
        for (int node : graph[currentNode])
        {
            if (!visited[node])
            {
                q.push(node);
                visited[node] = true;
                order++;
                orders[node] = order;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << orders[i] << '\n';
    }

    return 0;
}