#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    
    vector<vector<int>> matrix(m, vector<int>(n));
    
    // 读入矩阵数据
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // 输出原始矩阵
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    // 输出转置后的矩阵
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}