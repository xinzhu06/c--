#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int A,B,C;
    cin >> A >> B >> C ;
    
    vector<vector<int>>matrix1(A,vector<int>(B));
    vector<vector<int>>matrix2(B,vector<int>(C));
    vector<vector<int>>result(A,vector<int>(C));

    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            cin >> matrix1[i][j];
        }
        
    }
    for (int i = 0; i < B; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> matrix2[i][j];
        }
        
    }
    
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < C; j++)
        {
            
        }
        
    }
    
}