#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n, smallest=0,largest=0, seconds=0, minIndex;
    cin >> n;
 
    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }
 
    for (int i = 0; i < n; ++i) {
        if (heights[i] <= heights[smallest]) {
            smallest = i;
        }
        if (heights[i] > heights[largest]) {
            largest = i;
        }
    }
 
    minIndex = (smallest + largest) / 2;
 
    if ((smallest < minIndex && minIndex < largest)||minIndex==smallest) {
        seconds = largest + (n - smallest - 1) - 1;
    }
    else {
        seconds = largest + (n - smallest - 1);
    }
    
    cout << seconds << endl;
 
    return 0;
}