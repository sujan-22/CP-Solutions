#include <iostream>
using namespace std;
 
int main() {
    int n, freeOfficers=0, untreatedCrimes =0;
    cin >> n;
 
    for (int i = 0; i < n; ++i) {
        int event;
        cin >> event;
        if (event > 0) {
            freeOfficers += event;
        }
        else if (freeOfficers > 0) {
            freeOfficers--; 
        }
        else {
            untreatedCrimes++;
        }
    }
    cout << untreatedCrimes << endl;
    return 0;   
}