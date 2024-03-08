#include <bits/stdc++.h>
#define ll long long
#define f(i,p,n) for (int i = p; i < n; ++i)
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
 
using namespace std;
 
void Solve(){
    int n,m,k;
    cin>>n>>m>>k;
    umap(int, int) m1,m2;
    f(i,0,n){
        int a;
        cin>>a;
        m1[a]++;
    }
    f(i,0,m){
        int a;
        cin>>a;
        m2[a]++;
    }
    int a=0,b=0;
    bool bad=true;
    f(i,1,k+1){
        bad=true;
        if(m1[i]){
            bad=false;
            a++;
        }if(m2[i]){
            bad=false;
            b++;
        }
        if(bad){
            cout<<"NO\n";
            return;
        }
    }
   if(a>=k/2&&b>=k/2){
       cout<<"YES\n";
   } else {
       cout<<"NO\n";
   }
}
 
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
 cin>>t;
 tc{
  Solve();
 }
 
    return 0;
}
 