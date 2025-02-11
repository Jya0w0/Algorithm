#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> meeting(n);
    for (int i = 0; i < n; i++)
    {
        cin >> meeting[i].first >> meeting[i].second;
    }
    sort(meeting.begin(), meeting.end());

    priority_queue<int, vector<int>, greater<int>> pq;

    for (pair<int, int> m : meeting)
    {
        int start = m.first;
        int end = m.second;

        if (!pq.empty() && pq.top() <= start) 
        {
            pq.pop();
        }

        pq.push(end);
    }

    cout << pq.size();

    return 0;
}