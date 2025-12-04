#include <iostream>
#include <string>
using namespace std;
    
class person
{
public:
    int m_A;
    int m_B;

    person operator +(person &p)
    {
        person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }

};

void test01()
{
    person p1;
    p1.m_A = 10;
    p1.m_B = 10;
    person p2;
    p2.m_A = 10;
    p2.m_B = 10;
    person p3;
    p3 = p1 + p2;
    cout << p3.m_A << endl;
}

int main(){
    test01();
}