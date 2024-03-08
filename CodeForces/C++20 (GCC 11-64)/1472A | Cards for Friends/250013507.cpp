#include <bits/stdc++.h>
#define ll long long
#define f(i,p,n) for(int i=p; i<n; ++i)
#define fr(i,p,n) for(int i=p; i>=n; --i)
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
#define lcm(a, b) ((a) * (b)) / __gcd(a, b)
#define count(n) floor(log10(n)+1)
 
using namespace std;
 
void solve(){
    int w,h,n;
    int count=1;
    cin>>w>>h>>n;
    if(w%2!=0&&h%2!=0&&n>1){
        cout<<"NO\n";
        return;
    } else if (w%2!=0&&h%2!=0&&n==1){
        cout<<"YES\n";
        return;
    } else {
        while(true){
            if(h%2==0&&w%2==0){
                h/=2;
                count*=2;
            } else if(w%2==0){
                w/=2;
                count*=2;
            } else if(h%2==0){
                h/=2;
                count*=2;
            }
            if(count>=n||(w%2!=0&&h%2!=0)){
                break;
            }
        }
    }
    count>=n?cout<<"YES\n":cout<<"NO\n";
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