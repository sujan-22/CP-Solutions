#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
 
int main() {
    int num, temp;
    cin >> num;
 
    unordered_set<int> mySet;
 
    for (int i = 0; i < num; ++i) {
        cin >> temp;
        mySet.insert(temp);
    }
 
    if (mySet.find(1) != mySet.end()) {
        cout << "HARD" << endl;
    }
    else {
        cout << "EASY";
    }
                            
    return 0;
}