#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n;
int answer[2];
vector<vector<int>> map;
vector<int> white;
vector<int> black;

void dfs(int x, int y, int count, int color) {
    if (y >= n) 
    {
        x++;
        y = (y % 2 == 0) ? 1 : 0;
    }
    if (x >= n)
    {
        answer[color] = max(answer[color], count);
        return;
    }

    if (map[x][y] && !white[y - x + n - 1] && !black[x + y])
    {
        white[y - x + n - 1] = black[x + y] = 1;
        dfs(x, y + 2, count + 1, color);
        white[y - x + n - 1] = black[x + y] = 0;
    }
    dfs(x, y + 2, count, color);
}

int main() {
    cin >> n;

    map.resize(n, vector<int>(n));
    white.resize(2 * n - 1);
    black.resize(2 * n - 1);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> map[i][j];
        }
    }

    dfs(0, 0, 0, 0);
    dfs(0, 1, 0, 1);

    cout << answer[0] + answer[1];

    return 0;
}