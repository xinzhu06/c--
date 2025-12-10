#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> strings(5);
    
    // 读取5个字符串
    for (int i = 0; i < 5; i++) {
        cin >> strings[i];
    }
    
    // 对字符串进行排序
    sort(strings.begin(), strings.end());
    
    // 输出结果
    cout << "After sorted:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << strings[i] << endl;
    }
    
    return 0;
}