#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    
    // 输入矩阵
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // 预计算每行的最大值和每列的最小值
    vector<int> rowMax(n, INT_MIN);
    vector<int> colMin(n, INT_MAX);
    
    // 计算每行的最大值
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > rowMax[i]) {
                rowMax[i] = matrix[i][j];
            }
        }
    }
    
    // 计算每列的最小值
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] < colMin[j]) {
                colMin[j] = matrix[i][j];
            }
        }
    }
    
    bool found = false;
    
    // 寻找鞍点：既是行最大又是列最小的元素
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == rowMax[i] && matrix[i][j] == colMin[j]) {
                cout << i << " " << j << endl;
                found = true;
                goto end; // 找到第一个鞍点后退出
            }
        }
    }
    
    if (!found) {
        cout << "NONE" << endl;
    }
    
    end:
    return 0;
}