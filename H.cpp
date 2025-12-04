#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    double price;
    string name;
    cin >> price;
    cin.ignore();
    getline(cin,name);
    cout << fixed << setprecision(1);
    cout << name << "," << price << endl;
}