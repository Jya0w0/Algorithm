#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int n;
bool visited[10001];
vector<pair<int, int>> graph[10001];
int diameter;
int maxNode;

void dfs(int node, int distance){
	visited[node] = true;
	if (distance > diameter)
	{
		diameter = distance;
		maxNode = node;
	}
	for (int i = 0; i < graph[node].size(); i++)
	{
		int nextNode = graph[node][i].first;
		int cost = graph[node][i].second;
		if (!visited[nextNode]) dfs(nextNode, distance + cost);
	}
}

int main() {
    cin >> n;

	for (int i = 0; i < n - 1; i++)
	{
		int parent, child, cost;
		cin >> parent >> child >> cost;
		graph[parent].push_back({ child, cost });
		graph[child].push_back({ parent, cost });
	}

	memset(visited, false, sizeof(visited));
	dfs(1, 0);

	diameter = 0;
	memset(visited, false, sizeof(visited));
	dfs(maxNode, 0);

	cout << diameter;

    return 0;
}