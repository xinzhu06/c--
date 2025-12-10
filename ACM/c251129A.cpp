#include <iostream>
#include <string>
#include <vector>
using namespace std;

void max(vector<int> &arr,int &max,int len)
{
    max = 0;
    for (int i = 1; i < len; i++)
    {
        if (arr[i]>arr[max])
        {
            max = i;
        }
        
    }
    
}

int main()
{
    int num; 
    cin >> num;
    vector <int>arr(num);
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int Max;
    int len = num;
    max(arr,Max,len);

    cout << arr[Max];
}