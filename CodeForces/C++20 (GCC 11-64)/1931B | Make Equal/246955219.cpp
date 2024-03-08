#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
#define FOR(n) for (int i = 0; i < n; ++i)
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        ll sum=0ll;
        vector<int> arr(n);
        for(int i=0; i<n;++i){
            cin >> arr[i];
            sum+=arr[i];
        }
 
        ll average = sum/n;
   
        ll counter=0ll;
 
        for(int i=0;i<n;++i){
            if((counter += arr[i]-average)<0) {
                break;
            }
        }
        if(counter<0)
            cout << "NO"  <<endl;
        else
            cout << "YES"<<endl;
    }
 
    return 0;
}
 
 