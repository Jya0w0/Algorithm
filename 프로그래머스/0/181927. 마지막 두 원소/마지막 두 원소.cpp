#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int a = num_list.size() - 1;
    int b = a - 1;
    if (num_list[a] > num_list[b]) num_list.push_back(num_list[a] - num_list[b]);
    else num_list.push_back(num_list[a] * 2);
    return answer = num_list;
}