#include <iostream>
using namespace std;
class cube
{
private:
    int len;
    int wid;
    int hight;
public:
    int getL(){
        return len;
    }
    void setL(int a){
        len = a;
    }
    int getW(){
        return wid;
    }
    void setW(int a){
        wid = a;
    }
    int getH(){
        return hight;
    }
    void setH(int a){
        hight = a;
    }


};

int main(){
    cube c1;
    c1.setH(10);
    c1.setW(10);
    c1.setL(10);

    cout << c1.getH() << endl;
}