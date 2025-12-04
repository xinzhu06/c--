#include <iostream>
using namespace std;

class person
{
private:
    /* data */
public:
    person()
    {
        cout << "gou zhao han shu" << endl;
    }
    person(int age)
    {
        m_age = age;
        cout << "you can gou zhao han shu" << endl;
    }
    person(const person & p)
    {
        m_age = p.m_age;
    }
    ~person()
    {
        cout << "xi shi han shu" << endl;
    }

    int m_age ;
};



void test1()
{
    person p1;//不要写成person p1();
}
//有参构造要（）无参构造不要（）
int main(){
    //test1();
    person p2(10);
    ///person (10);
    return 0;

}