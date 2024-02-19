#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main() {
    string str, result;
    cin >> str;
    int count = 0;
    for (char c : str) {
        if (isupper(c)) {
            count++;
        }
    } 
    if (count > str.size() / 2) {
        for (char& c : str) {
            c = toupper(c); 
        }
        result = str; 
    }
    else {
        for (char& c : str) {
            c = tolower(c);
        }
        result = str;
    }
    cout << result;
 
 return 0;
}
             