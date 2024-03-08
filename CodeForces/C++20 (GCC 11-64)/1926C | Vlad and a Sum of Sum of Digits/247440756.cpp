#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
#define FOR(p,n) for (int i = p; i < n; ++i)
using namespace std;
 
ll dp[200005];
 
int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   
    int t;
    cin >> t;
   
    FOR(1,2e5+2){
        dp[i]=dp[i-1]+digitSum(i);
    }
 
    while (t--) {
        int n;
        cin >> n;
        cout<<dp[n]<<"\n";
           
    }   
    return 0;
}
 