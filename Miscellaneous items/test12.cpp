#include <iostream>
using namespace std;

int huiWen(string str)
{
    int num = str.size();
    for (int i = 0; i < num/2; i++)
    {
        if (str[i] != str[num-1-i])
        {
            return 0;
        }
     
    }
       return 1;
}

int main()
{
    string input;
    cin >> input;
    
    if (huiWen(input))
    {
        cout << input << "yes";
    }else{
        cout << "no";
    }
    
}