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

    char p [100];
    cin >> p;
    if (p == v1[3])
    {
        cout << "yes" <<endl;
    }
    else{
        cout << "no" << endl;
    }
    

    
    
}