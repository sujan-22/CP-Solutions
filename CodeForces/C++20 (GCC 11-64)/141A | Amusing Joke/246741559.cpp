#include <iostream>
#include <unordered_map>
using namespace std;
 
bool canReconstruct(const string& guest, const string& host, const string& pile) {
    unordered_map<char, int> freq;
    for (char c : guest) {
        freq[c]++;
    } 
    for (char c : host) {
        freq[c]++;
    }
    for (char c : pile) {
        freq[c]--;
    }
 
    for (auto p : freq) {
        if (p.second < 0) {
            return false;
        }
    }
    return true;
 
}
 
int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;
 
    if (canReconstruct(guest, host, pile) && guest.length() + host.length() == pile.length()) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
 
    return 0;
}