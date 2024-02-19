
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    vector<int> arr(n), freq(2, 0);
 
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
        freq[arr[i]]++;
    }
 
    for(int i = 0; i < q; ++i) {
        int t;
        cin >> t;
        if(t == 2) {
            int k;
            cin >> k;
            int ones_left = k;
            if(ones_left <= freq[1]) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        } else {
            int x;
            cin >> x;
            x--;
            freq[arr[x]]--;
            arr[x] = 1 - arr[x];
            freq[arr[x]]++;
        }
    }
 
    return 0;
}
 
 