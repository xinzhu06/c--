#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student
{

public:
    Student();
    Student(int ID,string name,string sex,string department)
    {
        this->m_ID = ID;
        this->m_name = name;
        this->m_sex = sex;
        this->m_department = department;
    }

    int m_ID;
    string m_name;
    string m_sex;
    string m_department;

};

void bubblingSort(vector<Student>&v)
{
    for (int i = 0; i < (v.size()-1); i++)
    {
        for (int j = 0; j < (v.size()-1-i); j++)
        {
            if (v[j].m_ID > v[j+1].m_ID)
            {
                Student temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
            
        }
        
    }
    
}

void printVector(vector <Student> &v)
{
    for (vector<Student>::iterator it = v.begin();it != v.end();it++)
    {
        cout << "0" << (*it).m_ID << " " << (*it).m_name << " " << (*it).m_sex << " " << (*it).m_department << endl;
    }
    
}


int main()
{
    int n;
    cin >> n;
    vector <Student> students;
    for (int i = 0; i < n; i++)
    {
        int ID;
        string name;
        string sex;
        string department;
        cin >> ID>> name >> sex >> department;
        Student stu(ID,name,sex,department);
        students.push_back(stu);
    }
    int Num = 0;
    string numberDepartment;
    cin >> numberDepartment;
    for (int i = 0; i < n; i++)
    {
        if(students[i].m_department == numberDepartment)
        {
            Num++;
        }
    }
    
    bubblingSort(students);
    printVector(students);
    cout << Num;
}


