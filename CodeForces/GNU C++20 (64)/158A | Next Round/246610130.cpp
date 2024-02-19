#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n, k, count=0; 
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    } 
 
    int k_score = vec[k - 1];
 
    for (int num : vec) {
        if (num > 0 && num >= k_score) {
            count++;
        }
    } 
    cout << count << endl;
    
}