#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cout << "Full arrangement of 1~8" << endl;
    
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    
    do {
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i];
            if (i < nums.size() - 1) cout << " ";
        }
        cout << endl;
    } while (next_permutation(nums.begin(), nums.end()));
    
    return 0;
}
