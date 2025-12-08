#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Students
{
private:
    /* data */
public:
    Students(string name,int year,int month,int day)
    {
        this->m_name = name;
        this->m_year = year;
        this->m_month = month;
        this->m_day = day;
    }
    string m_name;
    int m_year;
    int m_month;
    int m_day;

    bool isOlderThan(const Students& other) const {
    if (m_year != other.m_year) {
        return m_year < other.m_year;  
    }
    if (m_month != other.m_month) {
        return m_month < other.m_month;  
    }
    return m_day < other.m_day;  
}

};

int main()
{
    int n;
    cin  >> n;
    vector<Students>v;
    for (int i = 0; i < n; i++)
    {
        string name;
        int year;
        int month;
        int day;
        cin >> name >> year >> month >> day ;
        Students stu (name,year,month,day);
        v.push_back(stu);
    }
    
    Students oldest = v[0];
    for (int i = 1; i < v.size(); i++) {
        if (v[i].isOlderThan(oldest)) {
            oldest = v[i];
        }
    }
    
    cout << oldest.m_name<< endl;
}