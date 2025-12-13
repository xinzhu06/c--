#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <string>strs;
    string input;
    for (int i = 0; i < 4; i++)
    {
        getline(cin ,input);
        strs.push_back(input);
    }
    cout << strs[0][0] << strs[1][0] << strs[2][0] << strs[3][0] << endl;
}