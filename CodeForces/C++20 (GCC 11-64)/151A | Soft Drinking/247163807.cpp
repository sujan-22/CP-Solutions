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
   
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_ml = k * l;
    int total_lime = c * d;
    int max_toasts = min(total_ml / nl, min(total_lime, p / np));
 
    cout << max_toasts / n;
    
    return 0;
}
 
 