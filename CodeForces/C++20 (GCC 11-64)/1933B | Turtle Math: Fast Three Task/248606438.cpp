#include <bits/stdc++.h>
#define ll long long
#define FOR(i,p,n) for (int i = p; i < n; ++i)
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
 
using namespace std;
 
void Solve(){
 int n,sum=0;
   cin>>n;
   vec(int) a(n);
   FOR(i,0,n){
    cin>>a[i];
    sum+=abs(a[i]);
   }
 
   if(sum%3==0) {cout<<"0\n"; return;}
   FOR(i,0,n){
   if((sum-a[i])%3==0) {cout<<"1\n"; return;}
   }
   if((sum+1)%3==0) {cout<<"1\n"; return;}
   cout<<"2\n";
}
 
int main() {
 ll t;
 cin>>t;
 tc{
  Solve();
 
 }
 
    return 0;
}