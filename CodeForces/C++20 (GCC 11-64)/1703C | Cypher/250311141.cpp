#include <bits/stdc++.h>
#define ll long long
#define f(i,p,n) for(int i=p; i<n; ++i)
#define fr(i,p,n) for(int i=p; i>=n; --i)
#define tc while(t--)
#define all(x) (x).begin(), (x).end()
#define rev(x) (x).rbegin(), (x).rend()
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
    int n;
    cin>>n;
    vec(int) a(n);
    f(i,0,n){
        cin>>a[i];
    }
    f(i,0,n){
        int temp;
        cin>>temp;
 
        f(j,0,temp){
            char move;
            cin>>move;
 
            if(move=='U'){
                a[i] = ((a[i] - 1) % 10 == -1) ? 9 : ((a[i] - 1) % 10);
            } else {
                a[i] = (a[i]+1) % 10;
            }
        }
    }
 
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<'\n';
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
 