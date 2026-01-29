#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int,int,greater<int>> readPoly()
{
    int n;
    cin >> n;
    map<int,int,greater<int>>poly;
    for(int i = 0;i < n;++i)
    {
        int  coef, exp;
        cin >> coef >> exp;
        poly[exp] = coef;
    }
    return poly;
}

map<int ,int ,greater<int>> addPoly(map<int ,int ,greater<int>>&a,map<int ,int ,greater<int>>&b)
{
    map<int ,int ,greater<int>>ans = a;
    for(auto & t1:b)
    {
        int newExp = t1.first;
        int newCoef = t1.second;
        ans[newExp] += newCoef;
        if(ans[newExp] == 0)
        {
            ans.erase(newExp);
        }
    }
    return ans;
}

map<int ,int ,greater<int>> mulPoly(map<int ,int ,greater<int>>&a,map<int ,int ,greater<int>>&b)
{
    map<int ,int ,greater<int>>ans;
    for(auto &m1:a)
    {
        for(auto &m2:b)
        {
            int newExp = m1.first + m2.first;
            int newCofe = m1.second * m2.second;
            ans[newExp] += newCofe;
            if (ans[newExp] == 0) {
                ans.erase(newExp);
            }
        }
    }
    return ans;
}

void  printPoly(const map<int, int, greater<int>>& poly)
{
    if (poly.empty()) {
        cout << "0 0" << endl;
        return;
    }
    bool space = true;
    for(auto &term :poly)
    {
        if(!space)cout << " ";
        cout << term.first << " " << term.second;
        space = false;
    }
    cout << endl;
}

int main()
{
    auto poly1 = readPoly();
    auto poly2 = readPoly();

    auto product = mulPoly(poly1, poly2);
    auto sum = addPoly(poly1, poly2);

    printPoly(product);
    printPoly(sum);
}