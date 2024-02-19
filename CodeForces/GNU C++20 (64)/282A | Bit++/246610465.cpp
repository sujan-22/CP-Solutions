#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n, sum = 0;
    cin >> n;
    string str;
    for (int i = 0; i < n; ++i) {
        cin >> str;
        if (str == "X++" || str=="++X") sum++;
        else sum--;
    } 
 
    cout << sum << endl;
    
}