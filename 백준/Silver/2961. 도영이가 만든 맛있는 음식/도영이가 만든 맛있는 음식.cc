#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> s(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> b[i];
    }

    int answer = 1000000000;
    for (int i = 1; i < (1 << n); i++)
    {
        int sour = 1;
        int bitter = 0;

        for (int j = 0; j < n; j++) 
        {
            if (i & (1 << j)) 
            {
                sour *= s[j];
                bitter += b[j];
            }
        }

        answer = min(answer, abs(sour - bitter));
    }
    cout << answer;
    return 0;
}