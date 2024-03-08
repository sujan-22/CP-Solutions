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
 int n,m;
 bool bad = false;
 cin>>n>>m;
 mat(char) matrix(n,vector<char>(m));
 FOR(i,0,n){
  FOR(j,0,m){
   cin>>matrix[i][j];
   if(matrix[i][j]=='C'||matrix[i][j]=='M'||matrix[i][j]=='Y'){
    bad = true;
   }
  }
 }
 
 if(!bad) cout<<"#Black&White\n";
 else cout<<"#Color\n";
 
    return 0;
}