#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int a, b, ans1=0, ans2=0;
    cin >> a >> b;
    
    int different_socks = min(a,b);
    a-=different_socks;
    b-=different_socks;
 
    int same_socks = (a+b)/2;
 
    cout << different_socks << " " << same_socks << endl;
 
    return 0;
}
 