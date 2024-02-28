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
  string s;
  cin>>s;
  if((s[0]=='c'&&s[2]=='b')||(s[0]=='b'&&s[2]=='a')) cout<<"NO\n";
  else cout<<"YES\n";
 }
 
    return 0;
}