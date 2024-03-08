#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
 
bool hasDistinctDigits(int year) {
    string yearStr = to_string(year);
    unordered_set<char> digits;
    for (char digit : yearStr) {
        if (digits.count(digit) > 0) {
            return false;
        }
        digits.insert(digit);
    }
    return true;
}
 
 
int main() {
    int year;
    cin >> year;
 
    while (!hasDistinctDigits(year + 1)) {
        year++;
    }
 
    cout << year + 1 << endl;
                            
    return 0;
}