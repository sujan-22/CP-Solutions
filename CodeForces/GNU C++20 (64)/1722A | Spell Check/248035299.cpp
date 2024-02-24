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
 
bool isValidName(string s, int n) {
    if (n!=5)
        return false;
    
    if (s.find('T') == string::npos)
        return false;
    
    sort(s.begin(), s.end()); 
    return s == "Timru";
}
 
 
int main() {
    int t;
    cin>>t;
    tc{
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(isValidName(s,n)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}