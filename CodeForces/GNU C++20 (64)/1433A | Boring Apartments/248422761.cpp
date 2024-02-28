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
     int n;
     cin>>n;
     string s = to_string(n);
     if(s.size()==4) cout<<((s[0]-'0')*10)<<'\n';
     else if (s.size()==3) cout<<((s[0]-'0')*10-4)<<'\n';
     else if (s.size()==2) cout<<((s[0]-'0')*10-7)<<'\n';
     else cout<<((s[0]-'0')*10-9)<<'\n';
    }
 
    return 0;
}