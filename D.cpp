#include <iostream>
#include <string>
using namespace std;

class Students
{
private:
    /* data */
public:
    string name ;
    int ID;

    void show()
    {
        cout << name << endl;
        cout << ID << endl;
    }
    
};


int main(){
    int a = 18;
    Students st1;
    st1.ID = a;
    st1.name = "Anny";
    st1.show();
    int * n = new int (10);
    delete  n;
}

