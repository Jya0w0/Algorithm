#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, r;
vector<vector<int>> graph;
vector<bool> visited;
vector<int> orders;
int order = 1;

void dfs(int x)
{
    visited[x] = true;
    orders[x] = order++;
    for (int i = 0; i < graph[x].size(); i++)
    {
        int y = graph[x][i];
        if (!visited[y]) dfs(y);
    }
}

int main(void) {
    cin >> n >> m >> r;
    graph.resize(n + 1);
    visited.resize(n + 1);
    orders.resize(n + 1);
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

    dfs(r);

    for (int i = 1; i <= n; i++)
    {
        cout << orders[i] << '\n';
    }

    return 0;
}