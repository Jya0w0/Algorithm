#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int a = 1;
    int b = 0;
    for (int i = 0; i < num_list.size(); i++)
    {
        a *= num_list[i];
        b += num_list[i];
    }
    return answer = a < b * b ? 1 : 0;
}