#include <iostream>
 
using namespace std;
 
int main() {
    int n; 
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;
        int sureCount = petya + vasya + tonya;
        if (sureCount >= 2) {
            count++;
        }
    } cout << count;
}