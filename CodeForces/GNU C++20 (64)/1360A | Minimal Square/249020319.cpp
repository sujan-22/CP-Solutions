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
    int a,b,s,m;
    cin>>a>>b;
    if(b>a){
        s=2*a;
        m=max(b,s);
        cout<<m*m<<'\n';   
    }else {
        s=2*b;
        m=max(a,s);
        cout<<m*m<<'\n';
    }
}
int main() {
 int t;
 cin>>t;
 tc{
  Solve();
 }
 
    return 0;
}
 