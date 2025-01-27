#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
    

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> map(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            map[i][j] = s[j] - '0';
        }
    }


    int maxSum = 0;
    for (int i = 0; i < (1 << (n * m)); i++) 
    {
        int sum = 0;
        for (int x = 0; x < n; x++) 
        {
            int num = 0;
            for (int y = 0; y < m; y++) 
            {
                int bit = x * m + y;
                if (i & (1 << bit))
                {
                    num = num * 10 + map[x][y];
                }
                else 
                { 
                    sum += num;
                    num = 0;
                }
            }
            sum += num;
        }

        for (int y = 0; y < m; y++) 
        {
            int num = 0;
            for (int x = 0; x < n; x++) 
            {
                int bit = x * m + y;
                if (!(i & (1 << bit))) 
                {
                    num = num * 10 + map[x][y];
                }
                else 
                { 
                    sum += num;
                    num = 0;
                }
            }
            sum += num;
        }

        maxSum = max(maxSum, sum);
    }

    cout << maxSum;

    return 0;
}