#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (auto query : queries) 
    {
        int i = query[0];
        int j = query[1];
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return answer = arr;
}