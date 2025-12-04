#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // 忽略换行符

    double max_price = -1, min_price = numeric_limits<double>::max();
    string max_name, min_name;

    for (int i = 0; i < n; i++) {
        string name;
        getline(cin, name);
        double price;
        cin >> price;
        cin.ignore(); // 忽略换行符

        if (price > max_price) {
            max_price = price;
            max_name = name;
        }
        if (price < min_price) {
            min_price = price;
            min_name = name;
        }
    }

    cout << fixed << setprecision(2);
    cout << max_price << ", " << max_name << "\n";
    cout << min_price << ", " << min_name << "\n";

    return 0;
}