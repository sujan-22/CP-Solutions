#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
 
int main() {
    int rooms,occupany,capacity, available=0;
    cin >> rooms;
 
    for (int i = 0; i < rooms; ++i) {
        cin >> occupany >> capacity;
        if (capacity - occupany >= 2) {
            available++;
        }
    }
 
    cout << available << endl;
                           
    return 0;
}