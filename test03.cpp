#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m,n,x;
    cin >> m >> n >> x;
    vector<int>first(m);
    vector<int>scond(n);
    for (int i = 0; i < m; i++)
    {
        cin >> first[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> scond[i];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (first[i] + scond[j] == x)
            {
                cout << i << " " << j << endl;
            }
            
        }
        
    }
    
    
}