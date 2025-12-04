#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    vector<vector<int>>list (m,vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> list[i][j];
        }
        
    }
    
    
    cout << fixed << setprecision(1);
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += list[i][j];
        }
        double average = (double)sum/n;
        cout << sum << " " << average << endl;
    }
    



}