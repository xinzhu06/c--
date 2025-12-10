#include <iostream>
#include <string> 
using namespace std;

int main()
{
    string str1;
    string str2;
    getline(cin ,str1);
    getline(cin ,str2);
    string result = "";
    for (int i = 0; i < str1.size(); i++)
    {
        char c = (str1[i] > str2[i])? str1[i] : str2[i];
        result += c;
    }
    cout << result;
}