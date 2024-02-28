#include <bits/stdc++.h>
#define ll long long
#define FOR(i,p,n) for (int i = p; i < n; ++i)
#define tc while(t--)
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define vec(T) vector<T>
#define mat(T) vector<vector<T>>
#define vpii(T) vector<pair<T, T>>
#define uset(T) unordered_set<T>
#define umap(T1, T2) unordered_map<T1, T2>
#define pb push_back
#define mp make_pair
 
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    vec(int) a(n);
    int m = INT_MAX;
    FOR(i,0,n){
        cin>>a[i];
        m = min(m,a[i]);
    }
    int count=0;
    FOR(i,0,n){
        if(a[i]==m){
            ++count;
        }
    } if(count==1) {cout<<"YES\n"; return;}
    FOR(i,0,n){
        if((a[i]%m)!=0){
            cout<<"YES\n";
            return;
        }
    } cout<<"NO\n";
}
 
int main() {
    int t=1;
    cin >> t;
    tc {
        solve();
    }
 
    return 0;
}