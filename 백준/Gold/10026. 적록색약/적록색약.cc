#include <iostream>
#include <vector>
using namespace std;

int n;

vector<vector<char>> map;
vector<vector<bool>> visitedC;
vector<vector<bool>> visitedN;

int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };

void dfs(int x, int y, char color, bool isColorblind)
{
    if (isColorblind)
    {
        visitedC[x][y] = true;
    }
    else
    {
        visitedN[x][y] = true;
    }

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < n && ny < n)
        {
            if (isColorblind && !visitedC[nx][ny])
            {
                if ((color == 'R' || color == 'G') && (map[nx][ny] == 'R' || map[nx][ny] == 'G'))
                {
                    dfs(nx, ny, color, isColorblind);
                }
                else if (map[nx][ny] == color)
                {
                    dfs(nx, ny, color, isColorblind);
                }
            }
            else if (!isColorblind && !visitedN[nx][ny])
            {
                if (map[nx][ny] == color)
                {
                    dfs(nx, ny, color, isColorblind);
                }
            }
        }
    }
}

int main(void)
{
    cin >> n;

    map.assign(n, vector<char>(n));
    visitedC.assign(n, vector<bool>(n, false));
    visitedN.assign(n, vector<bool>(n, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> map[i][j];
        }
    }

    int colorblind = 0;
    int notColorblind = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!visitedN[i][j])
            {
                dfs(i, j, map[i][j], false);
                notColorblind++;
            }
            if (!visitedC[i][j])
            {
                dfs(i, j, map[i][j], true);
                colorblind++;
            }
        }
    }

    cout << notColorblind << " " << colorblind;

    return 0;
}