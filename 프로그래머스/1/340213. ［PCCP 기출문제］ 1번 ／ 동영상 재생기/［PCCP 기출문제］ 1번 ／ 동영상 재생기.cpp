#include <string>
#include <vector>

using namespace std;

int ToSeconds(int min, int sec) {
    return min * 60 + sec;
}

string TimeFormat(int total_seconds) {
    int min = total_seconds / 60;
    int sec = total_seconds % 60;
    string s = (min < 10 ? "0" + to_string(min) : to_string(min)) + ":" + (sec < 10 ? "0" + to_string(sec) : to_string(sec));
    return s;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    int pos_min = stoi(pos.substr(0, 2));
    int pos_sec = stoi(pos.substr(3, 2));
    int v_min = stoi(video_len.substr(0, 2));
    int v_sec = stoi(video_len.substr(3, 2));
    int os_min = stoi(op_start.substr(0, 2));
    int os_sec = stoi(op_start.substr(3, 2));
    int oe_min = stoi(op_end.substr(0, 2));
    int oe_sec = stoi(op_end.substr(3, 2));
    
    int current_time = ToSeconds(pos_min, pos_sec);
    int video_time = ToSeconds(v_min, v_sec);
    int op_start_time = ToSeconds(os_min, os_sec);
    int op_end_time = ToSeconds(oe_min, oe_sec);
    
    for (auto c : commands)
    {
        if (op_start_time <= current_time && current_time <= op_end_time) current_time = op_end_time;
        
        if (c == "prev") current_time = max(0, current_time - 10);
        else if (c == "next") current_time = min(video_time, current_time + 10);
    }
    
    if (op_start_time <= current_time && current_time <= op_end_time) current_time = op_end_time;
    return TimeFormat(current_time);
}