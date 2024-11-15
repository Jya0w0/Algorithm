#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
vector<int> stones;
vector<bool> visited;
queue<int> q;
int bfs() {
    int count = 0;
    while (!q.empty()) 
    {
        int current = q.front();
        q.pop();
        count++;

        int left = current - stones[current];
        if (left >= 1 && !visited[left]) {
            visited[left] = true;
            q.push(left);
        }

        int right = current + stones[current];
        if (right <= n && !visited[right]) {
            visited[right] = true;
            q.push(right);
        }
    }
    return count;
}

int main(void) {
    cin >> n;

    stones.resize(n + 1);
    visited.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> stones[i];
    }

    int s;
    cin >> s;
    q.push(s);
    visited[s] = true;
    cout << bfs();

    return 0;
}