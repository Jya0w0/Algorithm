#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> lines(n);
    for (int i = 0; i < n; i++)
    {
        cin >> lines[i].first >> lines[i].second;
    }
    sort(lines.begin(), lines.end());

    long long length = 0;
    int start = lines[0].first;
    int end = lines[0].second;
    for (int i = 1; i < n; i++) 
    {
        int cur_start = lines[i].first;
        int cur_end = lines[i].second;

        if (cur_start <= end) 
        {
            end = max(end, cur_end);
        }
        else 
        {
            length += (end - start);
            start = cur_start;
            end = cur_end;
        }
    }
    length += (end - start);

    cout << length;

    return 0;
}