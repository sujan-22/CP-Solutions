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
#define set(T) unordered_set<T>
#define umap(T1, T2) unordered_map<T1, T2>
#define pb push_back
 
using namespace std;
 
int n;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin>>n;
    vec(int) cards(n);
    FOR(0,n){
        cin >> cards[i];
    }
 
    int sereja = 0, dima = 0;
    int left = 0, right = n - 1;
    bool serejaTurn = true;
 
    while (left <= right) {
        if (serejaTurn) {
            if (cards[left] > cards[right]) {
                sereja += cards[left];
                ++left;
            } else {
                sereja += cards[right];
                --right;
            }
        } else {
            if (cards[left] > cards[right]) {
                dima += cards[left];
                ++left;
            } else {
                dima += cards[right];
                --right;
            }
        }
        serejaTurn = !serejaTurn;
    }
 
    cout << sereja << " " << dima << endl;
       return 0;
}
 