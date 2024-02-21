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
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   
    int n;
    cin>>n;
    vec(int) a(n);
    FOR(0,n){
        cin>>a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int s=0;
    for(int i=1; i<n; ++i){
        s+=a[0]-a[i];
    }
    cout<<s<<'\n';
    return 0;
}
 