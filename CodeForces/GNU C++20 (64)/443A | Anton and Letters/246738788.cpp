#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
 
int main() {
    string letters;
    getline(cin, letters);
    
    unordered_set<char> distinctLetters;
    for (int i = 0; i < letters.size() - 1; ++i) {
        if (letters[i] >= 'a' && letters[i] <= 'z') {
            distinctLetters.insert(letters[i]);
        }
    }
 
    cout << distinctLetters.size() << endl;
 
    return 0;
}