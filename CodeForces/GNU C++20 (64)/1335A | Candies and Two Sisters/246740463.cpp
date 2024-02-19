#include <iostream>
#include <vector> 
using namespace std;
 
int main() {
    int t; long long n;
    cin >> t;
 
    vector<int> vec(t);
    for (int i = 0; i < t; ++i) {
        cin >> n;
        if (n % 2 == 0) {
            vec[i] = (n / 2) - 1;
        }
        else {
            vec[i] = n / 2;
        }
    }
 
    for (auto num : vec) {
        cout << num << endl;
    }
    
 
    return 0;
}