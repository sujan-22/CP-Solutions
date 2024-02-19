#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i];
    }
 
    int amazingPerformances = 0;
    int maxPoints = points[0];
    int minPoints = points[0];
 
    for (int i = 1; i < n; ++i) {
        if (points[i] > maxPoints) {
            maxPoints = points[i];
            amazingPerformances++;
        } else if (points[i] < minPoints) {
            minPoints = points[i];
            amazingPerformances++;
        }
    }
 
    cout << amazingPerformances << endl;
 
    return 0;
}