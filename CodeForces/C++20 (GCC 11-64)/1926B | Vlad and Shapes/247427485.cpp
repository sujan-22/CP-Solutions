#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
#define FOR(i,n) for (int i = 0; i < n; ++i)
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vector<string> grid(n);
        FOR(i,n) {
            cin >> grid[i];
        }
 
        int first_row = -1;
        FOR(i,n) {
            if (grid[i].find('1') != string::npos) {
                first_row = i;
                break;
            }
        }
 
        int initial_count = 0;
        for (char c : grid[first_row]) {
            if (c == '1') {
                initial_count++;
            }
        }
 
        int next_row = first_row + 1;
        int next_row_count = 0;
        if (next_row < n) {
            for (char c : grid[next_row]) {
                if (c == '1') {
                    next_row_count++;
                }
            }
        }
 
        if (initial_count == next_row_count) {
            cout << "SQUARE\n";
        } else {
            cout << "TRIANGLE\n";
        }  
    }       
    return 0;
}
 
 