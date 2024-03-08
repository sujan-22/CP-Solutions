#include <string>
#include <iostream>
#define ll long long
using namespace std;
 
int main() {
 ll n, count=0;
 cin >> n;
 string str = to_string(n);
 for (int i = 0; i < str.size(); ++i) {
  if (str[i] == '4' || str[i] == '7') {
   count++;
  }
 }
  if (count == 4 || count == 7) {
  cout << "YES";
 }
 else {
  cout << "NO";
 }
 
 return 0;
}
             