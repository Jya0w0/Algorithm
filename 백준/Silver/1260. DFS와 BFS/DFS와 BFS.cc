#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, m, v;
vector<vector<int>> graph;
vector<bool> visited;

void dfs(int x) {
    visited[x] = true;
    cout << x << " ";

    for (int i = 0; i < graph[x].size(); i++)
    {
        int y = graph[x][i];
        if (!visited[y]) dfs(y);
    }
}

void bfs() {
    vector<bool> visited(n + 1);
    queue<int> q;
    q.push(v);
    visited[v] = true;

    while (!q.empty())
    {
        int currentNode = q.front();
        q.pop();
        cout << currentNode << " ";

        for (int node : graph[currentNode])
        {
            if (!visited[node])
            {
                q.push(node);
                visited[node] = true;
            }
        }
    }
}

int main(void) {
    cin >> n >> m >> v;
    graph.resize(n + 1);
    visited.resize(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) 
    {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(v);
    cout << "\n";
    bfs();

    return 0;
}