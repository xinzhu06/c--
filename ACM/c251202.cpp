#include <iostream>
#include <string>
using namespace std;

void strmcpy(string &s,string &t ,int n)
{
    if (n < 1 || n > static_cast<int>(t.length())) {
        s = ""; 
        return;
    }
    s = t.substr(n - 1);
    
}

int main()
{
    int repeat;
    cin >> repeat;
    cin.ignore(); 
    while (repeat--)
    {
        string t,s;
        int n;

        getline(cin,t);
        cin >> n;
        cin.ignore(); 

        strmcpy(s,t,n);

        if (n < 1 || n > static_cast<int>(t.length())) {
            cout << "error input" << endl;
        } else {
            strmcpy(s, t, n);
            cout << s << endl;
        }

    }
    
}