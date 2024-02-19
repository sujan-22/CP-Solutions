#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
    int magnets, groups = 1;
    cin >> magnets;
 
    vector<string> arr(magnets);
    for (int i = 0; i < magnets; ++i) {
        cin >> arr[i];
    }
 
    for (int i = 1; i < magnets; ++i) {
        if (arr[i] != arr[i - 1]) {
            groups++;
        }
    }
 
    cout << groups << endl;
                           
    return 0;
}