#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int M,N;
    cin >> M >> N;
    vector<vector<int>> localMaximum (M,vector<int>(N));
//输入
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> localMaximum[i][j];
        }
    }
//判断
    int found = 1;
    for (int i = 1; i < M-1; i++)
    {
        for (int j = 1; j < N-1; j++)
        {
            if (localMaximum[i][j] > localMaximum[i-1][j] &&  
                localMaximum[i][j] > localMaximum[i+1][j] &&  
                localMaximum[i][j] > localMaximum[i][j-1] &&  
                localMaximum[i][j] > localMaximum[i][j+1])
            {
                cout << localMaximum[i][j] << " " << i+1 << " "<< j+1 << endl;
                found = 0;
            }
            
        }
        
    }

    if (found)
    {
        cout << "None" << " " << M << " " << N;
    }
    
    
}