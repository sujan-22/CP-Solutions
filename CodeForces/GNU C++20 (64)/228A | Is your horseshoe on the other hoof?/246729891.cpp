#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
 
int main() {
    unordered_set<int> colors;
    int color;
    for (int i = 0; i < 4; ++i) {
        cin >> color;
        colors.insert(color);
    }
 
    cout << 4 - colors.size() << endl;
 
    return 0;
}