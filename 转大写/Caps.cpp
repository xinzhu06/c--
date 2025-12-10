#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string input;
    getline(cin ,input);

    string result = "";
    bool newword = true;

    for (int i = 0; i < input.size(); i++)
    {
        char c = input[i];
        if(isalpha(c))
        {
            if(newword)
            {
                result += toupper(c);
                newword = false;
            }else{
                result += c;
            }
        }
        if (c == ' ' || c == '\'')
        {
            result += c;
            newword = true;
        }
        
    }
    cout << result ;
}