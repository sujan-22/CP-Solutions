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
        string s;
        cin>>s;
        int count_A = count(s.begin(), s.end(), 'A');
        int count_B = count(s.begin(), s.end(), 'B');
 
        if (count_A > count_B) {
            cout << "A\n";
        } else {
            cout << "B\n";
        }    }
       
    return 0;
}
 
 