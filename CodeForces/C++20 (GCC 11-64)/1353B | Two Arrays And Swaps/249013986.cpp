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
    int n,k,s1=0,s2=0;
    cin>>n>>k;
    vec(int) a(n), b(n);
    f(i,0,n){
        cin>>a[i];
        s1+=a[i];
    }    
    f(i,0,n){
        cin>>b[i];
        s2+=b[i];
    }
    if(k==0){
        cout<<s1<<'\n';
        return;
    }
    sort(all(b), greater<int>());
    sort(all(a));
    f(i,0,k){
        if(a[i]==b[i]) continue;
        if(a[i]<b[i]){a[i]=b[i];} 
    }
    int r=0;
    f(i,0,n){
        r+=a[i];
    }
    cout<<r<<'\n';
}
 
int main() {
 int t;
 cin>>t;
 tc{
  Solve();
 }
 
    return 0;
}
 