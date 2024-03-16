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
#define vpii(T) vector<pair<T, T>>
#define uset(T) unordered_set<T>
#define umap(T1, T2) unordered_map<T1, T2>
#define pb push_back
#define mp make_pair
#define lcm(a, b) ((a) * (b)) / __gcd(a, b)
#define count(n) floor(log10(n)+1)
 
using namespace std;
 
void solve(){
    int n,k; string s;
    cin>>n>>k>>s;
    if(s.size()==1||(s.size()==2&&k==1)){
        cout<<"YES\n";
        return; 
    }
    umap(char, int) freq;
    for(auto &c:s){
        ++freq[c];
    }
    int c=0;
    for(auto &i:freq){
        if(i.second&1) ++c;
    }
    cout<<(c<=k+1?"YES\n":"NO\n");
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