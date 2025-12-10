#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int arr[7][7] = {
        {1, 2, 2, 2, 2, 2, 1},
        {3, 1, 2, 2, 2, 1, 4},
        {3, 3, 1, 2, 1, 4, 4},
        {3, 3, 3, 1, 4, 4, 4},
        {3, 3, 1, 5, 1, 4, 4},
        {3, 1, 5, 5, 5, 1, 4},
        {1, 5, 5, 5, 5, 5, 1}
    };
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << setw(2) << arr[i][j];

        }
        cout << endl;
    }
    
}