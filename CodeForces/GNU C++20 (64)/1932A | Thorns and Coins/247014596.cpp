#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string path;
        cin >> path;
 
        int coins = 0;
        int pos = 0;
        while (pos < n) {
            if (path[pos] == '@') {
                ++coins;
            }
 
            if (pos + 1 < n && path[pos + 1] != '*') {
                ++pos;
            }
            else if (pos + 2 < n && path[pos + 2] != '*') {
                pos += 2;
            }
            else {
                break;
            }
        }
 
        cout << coins << endl;
    }
    return 0;
}