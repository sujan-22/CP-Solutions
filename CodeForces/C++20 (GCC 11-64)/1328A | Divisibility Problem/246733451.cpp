#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    vector<int> arr(t);
    for (int i = 0; i < t; ++i) {
        int a, b;
        cin >> a >> b;
        int moves = (a % b == 0) ? 0 : b - (a % b);
        arr[i] = moves;
    }
 
    for (int num : arr) {
        cout << num << endl;
    }
 
    return 0;
}