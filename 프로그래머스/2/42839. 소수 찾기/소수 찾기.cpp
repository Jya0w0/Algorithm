#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return false;
    }

    return true;
}

int solution(string numbers) {
    int answer = 0;
    set<int> nums;
    sort(numbers.begin(), numbers.end());

    do {
        for (int i = 1; i <= numbers.size(); ++i) 
        {
            string str = numbers.substr(0, i);
            if (str[0] == '0' && str.size() > 1) continue;
            int num = stoi(str);
            if (isPrime(num)) nums.insert(num);
        }
    } while (next_permutation(numbers.begin(), numbers.end()));

    return answer = nums.size();
}