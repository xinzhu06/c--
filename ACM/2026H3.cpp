#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int array[],int num,int moveNum)
{
    reverse(array,array + num);
    int n = num - moveNum;
    reverse(array,array + n);
    reverse(array + n,array + num);
}

int main()
{
    int num;
    int moveNum;
    cin >> num;
    cin >> moveNum;
    int array[num];
    for (int i = 0; i < num; i++)
    {
        cin >> array[i];
    }
    
    reverse(array,num,moveNum);
    
    for (int i = 0; i < num; i++)
    {
        cout << array[i];
        if(i < num - 1)
        {
            cout << " " ;
        }
    }
}