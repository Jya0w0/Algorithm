#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> arr(9);
int result;
vector<int> currentArr;
int visit[9];
int cnt = 0;

void solve() {
	if (currentArr.size() == n) 
	{
		int sum = 0;
		for (int i = 0; i < n - 1; i++) 
		{
			sum += abs(currentArr[i + 1] - currentArr[i]);
		}
		result = max(result, sum);
		return;
	}
	for (int i = 1; i <= n; i++) 
	{
		if (!visit[i]) 
		{
			visit[i] = 1;
			currentArr.push_back(arr[i]);
			solve();
			currentArr.pop_back();
			visit[i] = 0;
		}
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	solve();
	cout << result << endl;
}