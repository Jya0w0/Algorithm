#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> words(n);
    vector<int> length(n);
    vector<int> nums(26);
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
        length[i] = words[i].size();
    }

    for (int i = 0; i < n; i++) 
    {
        int a = 1;
        for (int j = length[i] - 1; j >= 0; j--)
        {
            nums[words[i][j] - 'A'] += a;
            a *= 10;
        }
    }
    sort(nums.begin(), nums.end(), greater<int>());

    for (int i = 0; i < 10; i++) 
    {
        if (nums[i] == 0) break;
        answer += nums[i] * (9 - i);
    }
    cout << answer;

    return 0;
}