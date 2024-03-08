#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k,r;
    cin >> k >> r;
    int shovels = 1;
    while(true){
        int cost = shovels * k;
        if(cost%10==0||cost%10==r){
            cout << shovels << endl;
            break;
        }
        shovels++;
    }
 
    return 0;
}
 