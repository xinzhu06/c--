#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<vector<int>> &v)
{
    for (vector<vector<int>>::iterator it = v.begin();it != v.end();it++)
    {
        for (vector<int>::iterator vit = (*it).begin();vit != (*it).end();vit++)
        {
            cout << *vit << " " ;
        }
        
    }
    cout << endl;
}

int main()
{
    int m,n;
    cin  >> m >> n;
    vector<int> sum;
    for (int i = 0; i < m*n; i++)
    {
        int val;
        cin >> val;
        sum.push_back(val);
    }
    vector<vector<int>> type1;
    vector<vector<int>> type2;
    int k = 0;
    for (int i = 0; i < n*m; i++)
    {
        vector<int>v1;
        v1.push_back(sum[i]);
        type1.push_back(v1);
    }
    printVector(type1);
    

}