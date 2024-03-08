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
 
int main() {
    int n;
    cin >> n;
 
    vector<int> skills(n);
    unordered_map<int, vector<int>> indices;
    for (int i = 0; i < n; ++i) {
        cin >> skills[i];
        indices[skills[i]].push_back(i + 1);    }
 
    int teams = min({indices[1].size(), indices[2].size(), indices[3].size()});
    cout << teams << endl;
 
    for (int i = 0; i < teams; ++i) {
        cout << indices[1][i] << " " << indices[2][i] << " " << indices[3][i] << endl;
    }
 
    return 0;
}