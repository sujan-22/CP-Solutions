#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int stops, maxCapacity = 0, currentPassengers = 0;
    cin >> stops;
    vector<pair<int, int>> vec(stops);
    for (int i = 0; i < stops; ++i) {
        cin >> vec[i].first >> vec[i].second;
    }
 
    for (int i = 0; i < stops; ++i) {
        currentPassengers -= vec[i].first; 
        currentPassengers += vec[i].second; 
        maxCapacity = max(maxCapacity, currentPassengers);
    }
 
    cout << maxCapacity << endl;
 
    return 0;
}