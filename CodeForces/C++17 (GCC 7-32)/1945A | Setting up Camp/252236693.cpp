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
void print(const stack<T>& stk) {
    stack<T> temp = stk;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}
 
template<typename T>
void print(const priority_queue<T>& pq) {
    priority_queue<T> temp = pq;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}
 
template<typename T>
void print(const queue<T>& pq) {
    queue<T> temp = pq;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}
 
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
 
// Overload for std::__cxx11::basic_string<char>
void __print(const std::__cxx11::basic_string<char> &s) {
    cerr << '"' << s << '"';
}
 
template<typename T>
void __print(const T &x) {
    int f = 0;
    cerr << '{';
    for (auto &i: x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
 
void _print() {
    cerr << "]\n";
}
 
template <typename T, typename... V>
void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
 
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
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
 
void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    int f = b % 3;
    ll ans=0;
    if (f + c >= 3 || f == 0) {
       ans+=a+ceil((b + c) / 3.0);
    } else {
        ans=-1;
    }
    cout<<ans<<'\n';
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
 