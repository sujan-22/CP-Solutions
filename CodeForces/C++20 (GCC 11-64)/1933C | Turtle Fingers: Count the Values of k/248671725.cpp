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
 int a, b, l;
 cin >> a >> b >> l;
 set<int> s;
 f(i,0,21){
  int s1 = pow(a,i);
  if(l%s1==0){
   int v = l/s1;
   f(j,0,21){
    int s2 = pow(b,j);
    if(v%s2==0){
     s.insert(v/s2);
    }
   }
  }
 } cout<<s.size()<<'\n';
 return;
}
 
int main() {
 ll t;
 cin>>t;
 tc{
  Solve();
 }
 
    return 0;
}