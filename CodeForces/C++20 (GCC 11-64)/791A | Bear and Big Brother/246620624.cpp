#include <iostream>
using namespace std;
int main() {
    int limak, bob, years=0; 
    cin >> limak >> bob;
    if(limak == bob) {
        years = 1;
    } else {
        do {
            limak *= 3;
            bob *= 2;
            ++years;
        } while (limak <= bob);
    }
    cout << years;
    return 0;
}