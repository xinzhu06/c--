#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printVector(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    
}

void test01()
{
    vector<int>v1(10,22);

    vector<int>v2(10,11);
    
    printVector(v2);
    if (v2 == v1)
    {
        cout << "yes";
    }
    else{
        cout << "no";
    }
    
}

int main()
{
    test01();
    
}