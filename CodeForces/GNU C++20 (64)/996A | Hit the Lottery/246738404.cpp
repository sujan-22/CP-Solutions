#include <iostream>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    int bills[] = { 100, 20, 10, 5, 1 };
    int count = 0;
 
    for (int i = 0; i < 5; ++i) {
        count += n / bills[i];
        n %= bills[i];
    }
    cout << count << endl;
    return 0;
}