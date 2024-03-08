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
    int n,c=0,sum=0,fair;
    cin>>n;
    f(i,0,n){
        int a;
        cin>>a;
        if(a==1){
            c++;
            sum++;
        }
        else 
            sum+=2;
    }
    if(sum % 2 == 0){
        if((sum/2) % 2 == 0 || (c % 2 == 0 && c!=0)){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }   
    }else {
        cout<<"NO\n";
    }   
   
}
 
int main() {
 int t;
 cin>>t;
 tc{
  Solve();
 }
 
    return 0;
}
 