#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>longest(n);
    for (int i = 0; i < n; i++)
    {
        cin >> longest[i];
    }
    if (n == 1) {
        cout << longest[0] << endl;
        return 0;
    }
    vector<int>pos;//记录最大连续的开始位置
    vector<int>recode;//记录练习递增的长度
    int len = 1;
    for (int i = 1; i < n; i++)
    {
        if(longest[i] > longest[i-1])
        {
            len++;
        }else{
            pos.push_back(i-len);
            recode.push_back(len);
            len = 1;
        }
    }
    pos.push_back(n - len);
    recode.push_back(len);
    auto max = max_element(recode.begin(),recode.end());
    int p = distance(recode.begin(),max);
    for (int i = pos[p]; i < pos[p]+*max; i++)
    {
        cout << longest[i];
        if(i != pos[p]+*max-1)
        {
            cout << " " ;
        }
    }
}