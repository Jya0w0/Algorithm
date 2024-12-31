#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> tree;
vector<int> arr;
int n;

void update(int node, int start, int end, int idx, int val) {
    if (start == end) 
    {
        arr[idx] = val;
        tree[node] = val;
    }
    else 
    {
        int mid = (start + end) / 2;
        if (start <= idx && idx <= mid) 
        {
            update(2 * node, start, mid, idx, val);
        }
        else 
        {
            update(2 * node + 1, mid + 1, end, idx, val);
        }
        tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    }
}

void build(int node, int start, int end) {
    if (start == end)
    {
        tree[node] = arr[start];
    }
    else 
    {
        int mid = (start + end) / 2;
        build(2 * node, start, mid);
        build(2 * node + 1, mid + 1, end);
        tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    }
}

int query(int node, int start, int end, int left, int right) {
    if (right < start || end < left) 
    {
        return INT_MAX;
    }
    if (left <= start && end <= right)
    {
        return tree[node];
    }
    int mid = (start + end) / 2;
    int left_query = query(2 * node, start, mid, left, right);
    int right_query = query(2 * node + 1, mid + 1, end, left, right);
    return min(left_query, right_query);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;

    arr.resize(n + 1);
    tree.resize(4 * n);

    for (int i = 1; i <= n; i++) 
    {
        cin >> arr[i];
    }

    build(1, 1, n);

    int m;
    cin >> m;

    vector<int> answer;

    for (int i = 0; i < m; i++) 
    {
        int type;
        cin >> type;

        if (type == 1) 
        {
            int index, value;
            cin >> index >> value;
            update(1, 1, n, index, value);
        }
        else if (type == 2) 
        {
            int left, right;
            cin >> left >> right;
            answer.push_back(query(1, 1, n, left, right));
        }
    }

    for (int a : answer) 
    {
        cout << a << "\n";
    }

    return 0;
}
