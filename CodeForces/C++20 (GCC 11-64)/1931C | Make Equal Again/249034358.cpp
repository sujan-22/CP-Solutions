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
 
using namespace std;
 
void Solve(){
    int n,first=1,last=1;
    cin>>n;
    vec(int) a(n);
    f(i,0,n){
        cin>>a[i];
    }
        int f=1;
        while(a[0]==a[f]){
            first++;
            f++;
        }
        int l=n-2;
        while(a[n-1]==a[l]){
            last++;
            l--;
        }
 
    if(a[0]==a[n-1]){
        int x=n-first-last;
        if(x<=0){
            cout<<0<<'\n';
        } else {
            cout<<x<<'\n';
        }
        return;
    }
 
    int m=max(first,last);
    cout<<n-m<<'\n';
        
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
 