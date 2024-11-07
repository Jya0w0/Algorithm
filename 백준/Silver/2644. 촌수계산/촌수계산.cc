#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int a, b;
vector<vector<int>> graph;
vector<bool> visited;
int answer = -1;

void dfs(int x, int count) {
    visited[x] = true;

    for (int i = 0; i < graph[x].size(); i++)
    {
        int y = graph[x][i];
        if (!visited[y])
        {
            if (y == b)
            {
                answer = count + 1;
                return;
            }
            dfs(y, count + 1);
        }
    }
}

int main(void) {
    cin >> n;
    cin >> a >> b;
    cin >> m;
    graph.resize(n + 1);
    visited.resize(n + 1);
    for (int i = 0; i < m; i++)
    {
        int p, q;
        cin >> p >> q;
        graph[p].push_back(q);
        graph[q].push_back(p);
    }

    dfs(a, 0);
    cout << answer << " ";

    return 0;
}