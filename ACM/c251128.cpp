#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string time_str;
    int n;
    
    // 读取输入
    getline(cin, time_str);
    cin >> n;
    
    // 解析时间字符串
    int hours, minutes, seconds;
    sscanf(time_str.c_str(), "%d:%d:%d", &hours, &minutes, &seconds);
    
    // 计算总秒数
    int total_seconds = hours * 3600 + minutes * 60 + seconds;
    
    // 加上n秒
    total_seconds += n;
    
    // 处理超过24小时的情况
    total_seconds = total_seconds % (24 * 3600);
    
    // 重新计算时分秒
    int new_hours = total_seconds / 3600;
    int remaining = total_seconds % 3600;
    int new_minutes = remaining / 60;
    int new_seconds = remaining % 60;
    
    // 输出结果
    cout << setfill('0') << setw(2) << new_hours << ":"
         << setfill('0') << setw(2) << new_minutes << ":"
         << setfill('0') << setw(2) << new_seconds << endl;
    
    return 0;
}
