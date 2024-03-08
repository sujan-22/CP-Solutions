#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> gift(n);
    for (int i = 0; i < n; ++i) {
        cin >> gift[i];
    }
 
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (gift[j] == i) {
                cout << j + 1 << " ";
                break;
            }
        }
    } cout << endl;
                           
    return 0;
}