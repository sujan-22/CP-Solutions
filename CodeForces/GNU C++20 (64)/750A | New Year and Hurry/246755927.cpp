#include <iostream>
using namespace std;
 
int main() {
    int i,n,k,problems=0, minutes=0, totalMinutes;
    cin >> n >> k;
    totalMinutes = 240 - k;
    i=1;
 
    while(minutes + i * 5<=totalMinutes){
     minutes += i*5;
     problems++;
     if(i==n){
      break;
     }
     i++;
    }
 
    cout << problems << endl;
 
    return 0;
}