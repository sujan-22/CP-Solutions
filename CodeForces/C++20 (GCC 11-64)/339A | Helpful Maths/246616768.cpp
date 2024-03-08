#include <iostream>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main() {
 string a, result;
 cin >> a;
    int count[4] = { 0 }; 
    for (char c : a) {
        if (c >= '1' && c <= '3') {
            count[c - '0']++;
        }
    }
 
    // Reconstruct the sorted string
    bool first = true;
    for (int i = 1; i <= 3; ++i) {
        for (int j = 0; j < count[i]; ++j) {
            if (!first) {
                result += "+";
            }
            else {
                first = false;
            }
            result += to_string(i);
        }
    }
 
    cout << result << endl;
}
             