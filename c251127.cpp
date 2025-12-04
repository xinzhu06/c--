#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    string input;
    getline(cin ,input);
    set<char>a(input.begin(),input.end());
    string b;
    for (char c:a)
    {
        b += c;
    }
    cout << b << endl;

}