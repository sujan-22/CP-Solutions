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
#define set(T) unordered_set<T>
#define umap(T1, T2) unordered_map<T1, T2>
#define pb push_back
 
using namespace std;
 
int t;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin>>t;
 
    tc{
       string s;
       cin>>s;
       transform(s.begin(), s.end(), s.begin(), ::tolower);
       cout<<(s=="yes"?"YES":"NO")<<'\n';
    }
    return 0;
}
 