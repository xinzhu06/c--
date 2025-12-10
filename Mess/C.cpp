#include <iostream>
using namespace std;

int sum(int a, int b){
    int temp;
    temp = a + b;
    return temp;
}


int jj(){
    int s = 10;
    return s;//可以返回局部变量的值 不能放回地址
}

int main(){
    int a = 10,b = 20 ;
 
    cout << sum(a,b) << endl;
    cout << sum(a,b) << endl;
    // cout << jj() << endl;
    // cout << jj() << endl;
    //static int n = 10;//静态变量存放在全局区

    int &d = a;
    d = b;
    cout << d << endl;
}