#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compareLen(const string &s1,const string &s2)
{
    return s1.size() < s2.size();
}

void printVector(const vector<string> &v)
{
    for(const auto &s : v)
    {
        cout << s << endl;
    }
    
}

int main()
{
    vector<string>strs;
    string input = "";
    while (getline(cin ,input))
    {
        if (input == "#")
        {
            break;
        }
        strs.push_back(input);
    }
    
    stable_sort(strs.begin(),strs.end(),compareLen);
    printVector(strs);
}