#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> roundNumbers;
        int position = 0;
 
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                roundNumbers.push_back(digit * (pow(10,position)));
            }
            n /= 10;
            position++;
        }
 
        cout << roundNumbers.size() << endl;
        for (int i = roundNumbers.size()-1; i >= 0; --i) {
            cout << roundNumbers[i] << " ";
        }
        cout << endl;
    }
 
    return 0;
}