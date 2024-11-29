#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<vector<int>> test;

	while (true)
	{
		int k;
		cin >> k;
		if (k == 0) break;

		vector<int> s(k);
		for (int i = 0; i < k; i++)
		{
			cin >> s[i];
		}
		test.push_back(s);
	}

	bool isFirstCase = true;
	for (auto& t : test) 
	{
		int k = t.size();
		vector<bool> select(k, false);
		fill(select.begin(), select.begin() + 6, true);

		if (!isFirstCase) cout << "\n";
		isFirstCase = false;

		do {
			for (int i = 0; i < k; i++) 
			{
				if (select[i]) cout << t[i] << " ";
			}
			cout << "\n";
		} while (prev_permutation(select.begin(), select.end()));
	}

	return 0;
}