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
        vec(int) a(3);
        FOR(0,3){
            cin>>a[i];
        }
        sort(all(a));
        if(a[0]+a[1]==a[2]){
            cout<<"YES"<<'\n';
        } else {
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}
 