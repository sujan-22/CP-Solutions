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
   int a[3];
   f(i,0,3){
       cin>>a[i];
   } 
   int result=0;
   for(auto& n:a){
       result^=n;
   }
   cout<<result<<'\n';
}
 
int main() {
 int t;
 cin>>t;
 tc{
  Solve();
 }
 
    return 0;
}
 