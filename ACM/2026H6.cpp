#include <iostream>
#include <vector>
using namespace std;


                      
int main()
{
    int k;
    cin >> k;
    int n;
    vector<int>input;
    while (cin >> n)
    {
        if(n < 0)break;
        input.push_back(n);
    }
    int len = input.size();
    if(k > len)
    {
        cout << "NULL";
        return 0;
    }
    cout << input[len-k];

}