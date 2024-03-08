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
#define counts(n) floor(log10(n)+1)
 
using namespace std;
 
void Solve(){
    string s;
    cin>>s;
    int n=s.length(), b=0, B=0;
    fr(i,n,0){
        if(s[i]=='b'){
            b++;
            s[i]=' ';
        }else if(s[i]=='B'){
            B++;
            s[i]=' ';
        }else if(islower(s[i])&&b){
            s[i]=' ';
            b--;
        }else if(isupper(s[i])&&B){
            s[i]=' ';
            B--;
        }
    }
    s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());
    cout<<s<<'\n';  
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
 