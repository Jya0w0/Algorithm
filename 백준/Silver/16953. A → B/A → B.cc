#include <iostream>
using namespace std;

int a, b;

int bToa(int n) {
    int answer = 1;
    while (n != a)
    {
        if (n < a) return -1;

        if (n % 2 == 0) n /= 2;
        else if (n % 10 == 1) n = (n - 1) / 10;
        else return -1;
        answer++;
    }
    return answer;
}

int main(void) {
    cin >> a >> b;

    cout << bToa(b);

    return 0;
}