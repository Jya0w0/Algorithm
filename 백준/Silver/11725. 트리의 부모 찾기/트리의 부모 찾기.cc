#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<vector<int>> graph;
vector<bool> visited;
vector<int> answer;

void dfs(int x) {
    visited[x] = true;

    for (int i = 0; i < graph[x].size(); i++)
    {
        int y = graph[x][i];
        if (!visited[y])
        {
            answer[y] = x;
            dfs(y);
        }
    }
}

int main(void) {
    cin >> n;
    graph.resize(n + 1);
    visited.resize(n + 1);
    answer.resize(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1);
    for (int i = 2; i <= n; i++)
    {
        printf("%d \n", answer[i]);
    }

    return 0;
}