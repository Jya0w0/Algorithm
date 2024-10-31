#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    int n;
    cin >> n;

	vector<int> a;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		a.push_back(num);
	}

	vector<int> lis;
	for (int i = 0; i < n; i++) 
	{
		auto it = lower_bound(lis.begin(), lis.end(), a[i]);
		if (it == lis.end()) lis.push_back(a[i]);
		else *it = a[i];
	}
	cout << lis.size() << endl;
    return 0;
}