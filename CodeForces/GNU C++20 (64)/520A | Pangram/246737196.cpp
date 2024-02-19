#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    if (n < 26) {
        cout << "NO" << endl;
        return 0;
    }
 
    string s;
    cin >> s;
 
    unordered_set<char> characters;
    for (char c : s) {
        c = tolower(c);
        characters.insert(c);
    }
 
    if (characters.size() >= 26) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
 
    return 0;
}