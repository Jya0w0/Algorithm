#include <iostream>
using namespace std;

int main() {
    int s, m;
    cin >> s >> m;

	if (s <= 1023) 
	{
		cout << "No thanks";
	}
	else 
	{
		s -= 1023;
		bool isPossible = true;
		for (int i = 0; i <= 10; i++) 
		{
			if (s & (1 << i))
			{
				if (!(m & (1 << i))) isPossible = false;
			}
		}

		cout << (isPossible ? "Thanks" : "Impossible");
	}

    return 0;
}