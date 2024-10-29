#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void) {
    int n;
    double l, w, h;
    cin >> n >> l >> w >> h;

	double left = 0;
	double right = min({ l, w, h });
	double answer = -1;
	int count = 0;
	while (left < right) 
	{
		double mid = (left + right) / 2;
		long long boxCount = floor(l / mid) * floor(w / mid) * floor(h / mid);
		if (n <= boxCount) 
		{
			answer = mid;
			left = mid;
		}
		else if (n > boxCount) 
		{
			right = mid;
		}
		count++;
		if (count >= 100) break;
	}
    cout << fixed << setprecision(9) << answer << endl;
    return 0;
}