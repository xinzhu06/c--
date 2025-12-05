#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >>m;
        vector<int>v1(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v1[i];
        }
        reverse(v1.begin(),v1.end());
        for (int i = 0; i < m; i++)
        {
            cout << v1[i];
            if (i < m-1)
            {
                cout << " " ;
            }
            
        }
        
    }
    
    
}