#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    string str1;
    getline(cin ,str1);
    
    int start = 0;
    for (int i = 0; i <= str1.size(); i++)
    {
        if (i == str1.size() || str1[i] == ' ')
        {
            if (i > start){
            reverse(str1.begin() + start,str1.begin() + i);
            }
            start = i + 1;
        }
    }
    cout << str1;
}
