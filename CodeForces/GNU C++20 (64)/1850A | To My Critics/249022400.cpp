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
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>=10||a+c>=10||b+c>=10){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";   
}
 
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
 cin>>t;
 tc{
  Solve();
 }
 
    return 0;
}
 