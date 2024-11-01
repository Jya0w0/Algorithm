#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;

	vector<int> locals;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		locals.push_back(num);
	}

	int m;
	cin >> m;

	int left = 0;
	int right = *max_element(locals.begin(), locals.end());
	int answer = 0;
	while (left <= right)
	{
		int total = 0;
		int mid = (left + right) / 2;
		for (int l : locals)
		{
			total += min(l, mid);
		}
		
		if (total <= m)
		{
			left = mid + 1;
			answer = mid;
		}
		else
		{
			right = mid - 1;
		}
	}
	cout << answer << endl;
    return 0;
}