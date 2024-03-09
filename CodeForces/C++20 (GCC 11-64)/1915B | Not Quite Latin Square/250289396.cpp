#include <bits/stdc++.h>
#define ll long long
#define f(i,p,n) for(int i=p; i<n; ++i)
#define fr(i,p,n) for(int i=p; i>=n; --i)
#define tc while(t--)
#define all(x) (x).begin(), (x).end()
#define rev(x) (x).rbegin(), (x).rend()
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
#define count(n) floor(log10(n)+1)
 
using namespace std;
 
void solve(){
    int a=0,b=0,c=0;
    mat(char) grid(3, vector<char>(3));
    f(i,0,3){
        f(j,0,3){
            cin>>grid[i][j];
            if(grid[i][j]=='A'){
                ++a;
            } else if(grid[i][j]=='B'){
                ++b;
            } else if(grid[i][j]=='C'){
                ++c;
            }
        }
    }
    if(a!=3){
        cout<<"A\n";
    } else if(b!=3){
        cout<<"B\n";
    } else {
        cout<<"C\n";
    }
}
 
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
    cin>>t;
    tc{
        solve();
    }
 
    return 0;
}