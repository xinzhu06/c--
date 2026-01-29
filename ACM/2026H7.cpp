#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
    vector<int>m1;
    vector<int>m2;
    int n;
    while (cin >> n)
    {
        if(n <= 0)break;
        m1.push_back(n);
    }
    int n1;
    while (cin >> n1)
    {
        if(n1 <= 0)break;
        m2.push_back(n1);
    }
    vector<int>ans;
    for(auto &s:m1)
    {
        int a = count(m2.begin(),m2.end(),s);
        if(a != 0)
        {
            ans.push_back(s);
        }
    }
    if(ans.empty())
    {
        cout << "NULL";
        return 0;
    }

    bool speace = true;
    for(auto &s:ans)
    {
        if(!speace)cout << " ";
        cout << s ;
        speace = false;
    }
}