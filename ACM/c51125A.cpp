#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;
    cin >> a;

    string str1 [7] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", 
        "Thursday", "Friday", "Saturday"
    };
    int weekNum = 7;
    for (int  i = 0; i < a; i++)
    {
        string input;
        cin >> input ;
        bool found = false;
        for (int  j = 0; j < weekNum; j++)
        {
            if (input == str1[j])
            {
                cout << j+1 << endl;
                found = true;
                break;
            }
        }
        if (!found) {
        cout << "-1" << endl;
        }
    }

}