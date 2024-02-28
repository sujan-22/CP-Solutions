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
 
int maxSumAfter(vector<int>& arr, int& n){
 int maxSum = 0;
 
     for (int i = 0; i < n; ++i) {
         maxSum += abs(arr[i]);
     }
     return (maxSum);
}
 
int main() {
 int t;
 cin>>t;
 tc{
  int n;
  cin>>n;
  vec(int) arr(n);
  FOR(i,0,n){
   cin>>arr[i];
  }
  cout<<maxSumAfter(arr,n)<<'\n';
 }
 
    return 0;
}