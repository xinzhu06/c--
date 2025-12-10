#include <iostream>
using namespace std;
long long firbnc(int n)
{
    if (n < 0)
    {
        return 0;
    }else if(n == 1){
        return 2;
    }else if(n == 0){
        return 1;
    }
    else
    {
        return firbnc(n-1)+firbnc(n-2);
    }
}

int main()
{
    int n;
    int sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += firbnc(i);
        
    }
    cout << sum << endl;
    
}