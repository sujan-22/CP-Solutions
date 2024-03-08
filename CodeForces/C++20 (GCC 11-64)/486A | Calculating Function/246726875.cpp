#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
    long long n, fn;
    cin >> n;
    if (n % 2 == 0) {
        fn = n / 2;
    }
    else {
        fn = -(n + 1) / 2;
    }
 
    cout << fn << endl;                                                                                             
 
                           
    return 0;
}