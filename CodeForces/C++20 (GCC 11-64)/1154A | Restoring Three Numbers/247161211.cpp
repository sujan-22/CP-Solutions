#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long
#define FOR(i,n) for (int i = 0; i < n; ++i)
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> arr(4);
    FOR(i,4){
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    FOR(i, 3){
        cout << arr[3] - arr[i] << " ";
    }
 
    return 0;
}
 
 