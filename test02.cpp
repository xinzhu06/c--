#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string>v1;
    v1.push_back("Sunday");
    v1.push_back("Monday");
    v1.push_back("Tuesday");
    v1.push_back("Wednesday");
    v1.push_back("Thursday");
    v1.push_back("Friday");
    v1.push_back("Saturday");
    int repeat;
    cin >> repeat;
    char p [100];
    while (repeat--)
    {
        int found = 1;
        cin >> p;
        for (int i = 0; i < 7; i++)
        {
            if(v1[i] == p)
            {
                cout << i+1 << endl;
                found = 0;
            }
        }
        if (found)
        {
            cout << -1;
        }
    }
}