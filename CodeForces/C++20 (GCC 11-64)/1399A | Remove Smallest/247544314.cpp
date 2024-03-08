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
 
bool solve(vector<int>& a){
    sort(all(a));
        FOR(1,a.size()){
            if(a[i]-a[i-1]>1){
                return false;
            }
        } 
    return true;
}
 
int t;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin>>t;
 
    tc{
        int n;
        cin>>n;
        vec(int) a(n);
        FOR(0,n){
            cin>>a[i];
        }
 
        if(solve(a))cout<<"YES";
        else cout<<"NO";
        cout<<'\n';
    }
    return 0;
}
 