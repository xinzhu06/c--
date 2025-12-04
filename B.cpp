#include <iostream>
#include <string> 
using namespace std;

int *func(){
    int *p = new int(10);
    return p;
}


int * jj(){
    int f = 10;
    return &f;//不能返回局部变量的地址
}

int main(){
    int a = 0;
    int *p = func();
    string str = "hello world";
    cout << &str << endl;
    cout << &a << endl;
    cout << *p << endl;
    delete p;
    cout << *p << endl;
    int n = 10;
    int &m = n;//引用
    cout << m << endl;//引用不能改变
    
}