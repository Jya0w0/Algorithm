#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int n, t;
    cin >> n >> t;

	int answer = -1;
	bool isTake = false;
	for (int bus = 0; bus < n; bus++)
	{
		int s, i, c;
		cin >> s >> i >> c;
		for (int j = 0; j < c; j++)
		{
			int departure = (j * i) + s;

			if (departure >= t) 
			{
				int waitTime = departure - t;

				if (!isTake) 
				{
					answer = waitTime;
					isTake = true;
				}
				else if (waitTime < answer) 
				{
					answer = waitTime;
				}
				break;
			}
		}
	}
	
	if (!isTake) cout << -1 << endl;
	else cout << answer << endl;
    return 0;
}