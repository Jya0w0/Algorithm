#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) 
    {
        int num;
        cin >> num;
        pq.push(num);
    }
    
    int answer = 0;
    while (pq.size() != 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();

        int sum = a + b;
        answer += sum;
        pq.push(sum);
    }

    cout << answer;

    return 0;
}