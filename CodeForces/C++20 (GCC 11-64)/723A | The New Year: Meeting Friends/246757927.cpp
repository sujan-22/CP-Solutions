#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
 
    int meetPoint = max(min(a,b), min(max(a,b),c));
 
    int totalTravel = abs(a - meetPoint) + abs(b - meetPoint) + abs(c - meetPoint);
 
    cout << totalTravel << endl;
 
    return 0;
}