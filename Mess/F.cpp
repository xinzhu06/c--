#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void myPrint(int val)
{
    cout << val << endl;
}

void tast01()
{
    vector <int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);

    // vector<int>::iterator itB = v.begin();
    // vector<int>::iterator itE = v.end();

    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for_each(v.begin(),v.end(),myPrint);
}

int main(){
    tast01();
}