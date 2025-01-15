#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;

vector<vector<int>> map;
queue<pair<int, int> > q;

int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };

void dfs(int x, int y) {
    map[x][y] = -1;

    for (int i = 0; i < 4; i++) 
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m && map[nx][ny] == 0)
        {
            dfs(nx, ny);
        }
    }
}

int main(void) {
    cin >> n >> m;
    int answer = 0;

    map.assign(n, vector<int>(m));

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i < n; i++) 
    {
        if (map[i][0] == 0)
        {
            dfs(i, 0);
        }
        if (map[i][m - 1] == 0)
        {
            dfs(i, m - 1);
        }
    }
    for (int j = 0; j < m; j++) 
    {
        if (map[0][j] == 0)
        {
            dfs(0, j);
        }
        if (map[n - 1][j] == 0)
        {
            dfs(n - 1, j);
        }
    }

    while (true) 
    {
        bool melt = false;

        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                if (map[i][j] == 1) 
                {
                    int count = 0;
                    for (int k = 0; k < 4; k++)
                    {
                        int nx = i + dx[k];
                        int ny = j + dy[k];
                        if (map[nx][ny] == -1)
                        {
                            count++;
                        }
                    }

                    if (count >= 2) 
                    {
                        q.push(make_pair(i, j));
                        melt = true;
                    }
                }
            }
        }

        if (!melt) 
        {
            break;
        }

        while (!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            map[x][y] = -1;

            for (int i = 0; i < 4; i++) 
            {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (map[nx][ny] == 0) 
                {
                    dfs(nx, ny);
                }
            }
        }
        answer++;
    }

    cout << answer;
    return 0;
}