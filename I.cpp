#include <iostream>
using namespace std;

int bullUp(int arr[],int len)
{
    for (int  i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-i-1; j++)
        {
            if (arr[j]<arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    
}

int bullDown(int arr[],int len)
{
    for (int  i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    
}


int main() {
    int n ,i = 0;
    cin >> n;
    int arr[100];
    while (n != 0)
    {
        int num = 0;
        num = n%10;
        n /= 10;
        
        arr[i] = num;
        i++;
        
    }
    int len;
    if (bullDown(arr,len) || bullUp(arr,len))
    {
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
    
    
   
}
