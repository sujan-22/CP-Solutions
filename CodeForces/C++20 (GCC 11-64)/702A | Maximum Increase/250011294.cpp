#include <bits/stdc++.h>
#define ll long long
#define f(i,p,n) for(int i=p; i<n; ++i)
#define fr(i,p,n) for(int i=p; i>=n; --i)
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
#define lcm(a, b) ((a) * (b)) / __gcd(a, b)
#define count(n) floor(log10(n)+1)
 
using namespace std;
 
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    int ml=1,cl=1;
    f(i,0,n){
        cin>>a[i];
    }
 
    f(i,1,n){
        if(a[i]>a[i-1]){
            ++cl;
        } else {
            ml = max(ml,cl);
            cl=1;
        }
    }
    ml=max(ml,cl);
    cout<<ml<<'\n';
 
}
 
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
    //cin>>t;
    tc{
        solve();
    }
 
    return 0;
}