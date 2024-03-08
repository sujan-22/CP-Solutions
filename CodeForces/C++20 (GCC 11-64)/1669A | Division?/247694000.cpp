#include <iostream> 
#include <vector>
#include <algorithm>
#include <cmath>
#include <list>
#include <unordered_map>
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
 
using namespace std;
 
int main() {
   int t;
   cin>>t;
   tc{
       int r;
       cin>>r;
       if(r<=1399) cout<<"Division 4\n";
       if(r>=1900) cout<<"Division 1\n";
       if(r>=1600&&r<=1899) cout<<"Division 2\n";
       if(r>=1400&&r<=1599) cout<<"Division 3\n";
   }
 
    return 0;
}