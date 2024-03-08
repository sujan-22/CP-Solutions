#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string feeling = "I hate";
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            feeling += " that I love";
        }
        else {
            feeling += " that I hate";
        }
    }
    feeling += " it";
    cout << feeling << endl;
 
    return 0;
}