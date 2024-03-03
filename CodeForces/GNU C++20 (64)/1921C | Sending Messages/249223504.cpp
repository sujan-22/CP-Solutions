#include <bits/stdc++.h>
#define ll long long
#define f(i,p,n) for (int i = p; i < n; ++i)
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
#define counts(n) floor(log10(n)+1)
 
using namespace std;
 
void Solve(){
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    vec(ll) m(n);
    f(i,0,n){
        cin>>m[i];
    }
    ll x, pr=0;
    f(i,0,n){
         x=min(b, abs(m[i]-pr)*a);
         f-=x;
         pr=m[i];
    }cout<<(f>0?"YES\n":"NO\n");
}
 
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
 cin>>t;
 tc{
  Solve();
 }
 
    return 0;
}
 