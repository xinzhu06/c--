#include <iostream>
#include <string.h>
using namespace std;

class Person
{
public:
    Person()
    {
        m_age = 10;
    }

    void PersonAdd(Person &p)
    {
        this->m_age += p.m_age;
    }

    int m_age;

};

void tast01()
{
    Person p1;
    Person p2;
    p2.PersonAdd(p1);
    cout << p2.m_age << endl;
}

void tast02()
{
    // cout << p2 << endl;
}

int main() {  
    tast01();
    tast02();
}