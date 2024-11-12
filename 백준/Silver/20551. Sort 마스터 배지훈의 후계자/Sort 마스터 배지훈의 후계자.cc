#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    vector<int> arr;
    vector<int> question;
    vector<int> answer;
    cin >> n >> m;
    arr.resize(n);
    question.resize(m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    for (int i = 0; i < m; i++)
    {
        cin >> question[i];

        int index = lower_bound(arr.begin(), arr.end(), question[i]) - arr.begin();
        if (index != n && arr[index] == question[i])
        {
            answer.push_back(index);
        }
        else
        {
            answer.push_back(-1);
        }
    }

    for (int a : answer)
    {
        cout << a << " ";
    }

    return 0;
}