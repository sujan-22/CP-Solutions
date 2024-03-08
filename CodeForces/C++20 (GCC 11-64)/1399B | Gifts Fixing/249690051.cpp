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
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define vecIn(a) for(int i=0;i<n;++i){cin>>a[i];}
 
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vec(ll) a(n),b(n);
    ll m1=LLONG_MAX,m2=LLONG_MAX,count=0;
    f(i,0,n){
        cin>>a[i];
        m1=min(m1,a[i]);
    }
    f(i,0,n){
        cin>>b[i];
        m2=min(m2,b[i]);
    }
    f(i,0,n){
        count += max(a[i] - m1, b[i] - m2);  
    }
    cout<<count<<'\n';
}
 
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
    cin>>t;
    tc{
        solve();
    }
 
    return 0;
}
 