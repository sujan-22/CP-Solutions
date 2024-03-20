#include <bits/stdc++.h>
#define ll long long
#define f(i,p,n) for(int i=p; i<n; ++i)
#define fr(i,p,n) for(int i=p; i>=n; --i)
#define tc while(t--)
#define all(x) (x).begin(), (x).end()
#define rev(x) (x).rbegin(), (x).rend()
#define vt(T) vector<T>
#define grid(T) vector<vector<T>>
#define vpair(T) vector<pair<T, T>>
#define uset(T) unordered_set<T>
#define umap(T1, T2) unordered_map<T1, T2>
#define pb push_back
#define mp make_pair
#define lcm(a, b) ((a) * (b)) / __gcd(a, b)
#define count(n) floor(log10(n)+1)
#define pii pair<int, int>
 
using namespace std;
 
template<typename T>
void print(const vector<T>& arr) {
    for (const auto& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
}
 
#define DEBUG
 
#ifdef DEBUG
 
    #define debug(args...)     (Debugger()) , args
 
    class Debugger
    {
        public:
        Debugger(const std::string& _separator = " - ") :
        first(true), separator(_separator){}
 
        template<typename ObjectType> Debugger& operator , (const ObjectType& v)
        {
            if(!first)
                std:cerr << separator;
            std::cerr << v;
            first = false;
            return *this;
        }
        ~Debugger() {  std:cerr << endl;}
 
        private:
        bool first;
        std::string separator;
    };
 
#else
    #define debug(args...)                  
#endif
 
const int MOD = 1e9+7;
 
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
 
 
void dfs(int x, int y, vector<string>& s, grid(int)& vis) {
    vis[x][y] = 1; 
    if (x == 1 && y == s[0].size() - 1) return;
    if (x - 1 >= 0 && s[x - 1][y] == '>' && !vis[x - 1][y + 1]) dfs(x - 1, y + 1, s, vis);
    if (x - 1 >= 0 && s[x - 1][y] == '<' && !vis[x - 1][y - 1]) dfs(x - 1, y - 1, s, vis);
    if (x + 1 < 2 && s[x + 1][y] == '>' && !vis[x + 1][y + 1]) dfs(x + 1, y + 1, s, vis);
    if (x + 1 < 2 && s[x + 1][y] == '<' && !vis[x + 1][y - 1]) dfs(x + 1, y - 1, s, vis);
    if (y - 1 >= 0 && s[x][y - 1] == '<' && !vis[x][y - 2]) dfs(x, y - 2, s, vis);
    if (y + 1 < s[0].size() && s[x][y + 1] == '>' && !vis[x][y + 2]) dfs(x, y + 2, s, vis);
}
 
void solve() {
    int n;
    cin >> n;
    vt(string) s(2);
    cin>>s[0]>>s[1];
    grid(int) vis(2, vector<int>(n, 0));
    dfs(0, 0, s, vis); 
    if (vis[1][n - 1]) cout << "YES\n";
    else cout << "NO\n";
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
 