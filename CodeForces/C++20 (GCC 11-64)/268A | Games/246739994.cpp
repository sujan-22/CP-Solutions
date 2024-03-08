#include <iostream>
#include <vector> 
using namespace std;
 
int main() {
    int n, result=0;
    cin >> n;
    vector<pair<int, int>> games;
    for (int i = 0; i < n; ++i) {
        int home, guest;
        cin >> home >> guest;
        games.push_back({ home,guest });
    }
 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (games[i].first == games[j].second) {
                result++;
            }
        }
    } cout << result;
 
    return 0;
}