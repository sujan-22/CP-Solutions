#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int friends, height, count = 0;
    cin >> friends >> height;
    vector<int> vec(friends);
 
    for (int i = 0; i < friends; ++i) {
        cin >> vec[i];
    }
 
    for (int i = 0; i < friends; ++i) {
        if (vec[i] > height) {
            count += 2;
        }
        else {
            count++;
        }
    }
    cout << count << endl;
 
    return 0;
}