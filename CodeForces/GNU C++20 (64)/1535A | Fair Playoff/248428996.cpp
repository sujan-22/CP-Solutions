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
 
int main() {
 int t;
 cin>>t;
 tc{
  int a,s,d,f;
  cin>>a>>s>>d>>f;
  if(max(a,s)+max(d,f)>a+s&&max(a,s)+max(d,f)>d+f){
   cout<<"YES\n";
  } else cout<<"NO\n";
 
 }
 
    return 0;
}