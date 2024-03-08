#include <iostream>
 
using namespace std;
 
int main() {
 int result;
 string a, b;
 cin >> a >> b;
 for (char& c : a) {
  c = tolower(c);
 }
 for (char& c : b) {
  c = tolower(c);
 } 
 if (a == b) result = 0;
 else if (a > b) result = 1;
 else result = -1;
 cout << result;
}
             