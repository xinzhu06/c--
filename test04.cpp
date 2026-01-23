#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>ans;
    ans.push_back(10);
    ans.push_back(10);
    ans.push_back(20);
    ans.push_back(10);
    ans.push_back(10);
    ans.push_back(10);
    auto n = find(ans.begin(),ans.end(),20);
    int len = distance(ans.begin(),n);
    cout << len;
}