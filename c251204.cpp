#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    
    vector<vector<int>> A(M, vector<int>(N));
    
    // 读取矩阵A
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    
    vector<vector<int>> result;  // 存储局部极大值的结果，格式为[值, 行号, 列号]
    
    // 遍历矩阵的非边界元素（即不包括第一行、最后一行、第一列、最后一列）
    for (int i = 1; i < M - 1; i++) {
        for (int j = 1; j < N - 1; j++) {
            int current = A[i][j];
            // 检查当前元素是否大于上下左右四个相邻元素
            if (current > A[i-1][j] &&  // 上
                current > A[i+1][j] &&  // 下
                current > A[i][j-1] &&  // 左
                current > A[i][j+1]) {  // 右
                result.push_back({current, i+1, j+1});  // 行号和列号从1开始
            }
        }
    }
    
    // 输出结果
    if (!result.empty()) {
        for (const auto& item : result) {
            cout << item[0] << " " << item[1] << " " << item[2] << endl;
        }
    } else {
        cout << "None " << M << " " << N << endl;
    }
    
    return 0;
}