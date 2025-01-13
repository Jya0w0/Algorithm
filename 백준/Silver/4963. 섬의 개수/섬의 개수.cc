#include <iostream>
#include <vector>
using namespace std;

int h, w;

vector<vector<int>> map;
vector<vector<bool>> visited;

int dx[] = { 0, 0, -1, 1, -1, -1, 1, 1 };
int dy[] = { -1, 1, 0, 0, -1, 1, -1, 1 };

void dfs(int x, int y)
{
    visited[x][y] = true;
    for (int i = 0; i < 8; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < h && ny < w && !visited[nx][ny] && map[nx][ny] == 1)
        {
            dfs(nx, ny);
        }
    }
}

int main(void)
{
    vector<int> answer;
    while (true) 
    {
        cin >> w >> h;

        if (w == 0 && h == 0) break;

        map.assign(h, vector<int>(w));
        visited.assign(h, vector<bool>(w));

        for (int i = 0; i < h; i++) 
        {
            for (int j = 0; j < w; j++) 
            {
                cin >> map[i][j];
            }
        }

        int count = 0;

        for (int i = 0; i < h; i++) 
        {
            for (int j = 0; j < w; j++) 
            {
                if (map[i][j] == 1 && !visited[i][j]) 
                {
                    dfs(i, j);
                    count++;
                }
            }
        }

        answer.push_back(count);
    }

    for (int a : answer)
    {
        cout << a << "\n";
    }

    return 0;
}