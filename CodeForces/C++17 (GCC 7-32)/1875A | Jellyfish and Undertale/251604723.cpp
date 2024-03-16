#include <bits/stdc++.h>
#define ll long long
#define f(i,p,n) for(int i=p; i<n; ++i)
#define fr(i,p,n) for(int i=p; i>=n; --i)
#define tc while(t--)
#define all(x) (x).begin(), (x).end()
#define rev(x) (x).rbegin(), (x).rend()
#define fi first
#define se second
#define vt(T) vector<T>
#define mat(T) vector<vector<T>>
#define vpair(T) vector<pair<T, T>>
#define uset(T) unordered_set<T>
#define umap(T1, T2) unordered_map<T1, T2>
#define pb push_back
#define mp make_pair
#define lcm(a, b) ((a) * (b)) / __gcd(a, b)
#define count(n) floor(log10(n)+1)
#define pii pair<int, int>
 
using namespace std;
 
void solve(){
    ll a,b,n;
    cin>>a>>b>>n;
    vt(ll) arr(n+1);
    ll ans=0;
    f(i,1,n+1){
        cin>>arr[i];
        if(arr[i]>=a-1){
            ans+=a-1;
        } else {
            ans+=arr[i];
        }
    }
    cout<<ans+b<<'\n';
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