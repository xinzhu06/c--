// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <string>
// #include <cstdlib>
// using namespace std;

// struct student 
// {
//     int age;
//     string name;
//     int score;
// };

// void print(student stu[]){
//     stu[1].age = 585;
// }



// int main(){
//     student stu [2] = {{12,"zub",45},{34,"hfu",4154}};
//     print(stu);
//     cout << stu[1].age << endl;
//     srand(time(NULL));
//       for (int i = 0; i < 10; ++i) {
//         int randomValue = 1 + rand() % 100;
//        cout << randomValue << endl;
//     }
// }

#include <iostream>
#include <string>
using namespace std;

void showMenu(){
    cout << "1,Add contacts" <<endl;
    cout << "2,Showe contacts" <<endl;
    cout << "3,Delete contacts" <<endl;
    cout << "4,Find contacts" <<endl;
    cout << "5,Change contacts" <<endl;
    cout << "6,Clear contacts" <<endl;
    cout << "0,esc" <<endl;
}

int main(){
    showMenu();
    int select = 0;
    cin >> select;



    switch (select)
    {
    case 1:
        
        break;
    case 2:
        
        break;
    case 3:
        
        break;
    case 4:
        
        break;
    case 5:
        
        break;
    case 6:
        
        break;
    case 0:
        cout<<"welcome next use"<<endl;
        return 0;
        break;
    default:
        break;
    }
}