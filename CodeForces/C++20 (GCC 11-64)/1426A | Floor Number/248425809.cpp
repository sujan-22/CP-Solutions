#include <bits/stdc++.h>
#define ll long long
#define FOR(p,n) for (int i = p; i < n; ++i)
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
  int n,x,count=2,floor=1;
  cin>>n>>x;
  if(n==1||n==2)cout<<1<<'\n';
  else {
   FOR(2,n+1){
    count+=x;
    floor++;
    if(count>=n){break;}
   }
   cout<<floor<<'\n';
  }
 
 }
 
    return 0;
}