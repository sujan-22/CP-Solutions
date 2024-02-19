#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n, levels, maxLevel = 0;
    cin >> n;
 
    vector<bool> canPass(n + 1, false);
 
    for (int j = 0; j < 2; ++j) {
        cin >> levels;
        for (int i = 0; i < levels; ++i) {
            int temp;
            cin >> temp;
            canPass[temp] = true;
        }
    }
 
    bool canPassAll = true;
    for (int i = 1; i <= n; ++i) {
        if (!canPass[i]) {
            canPassAll = false;
            break;
        }
    }
 
    if (canPassAll) {
        cout << "I become the guy.";
    }
    else {
        cout << "Oh, my keyboard!";
    }
 
    return 0;
}