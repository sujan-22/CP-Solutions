#include <string>
#include <iostream>
using namespace std;
 
int main() {
 string s, t, temp;
 cin >> s >> t;
 temp = s;
 reverse(temp.begin(), temp.end());
 if (temp == t) cout << "YES";
 else cout << "NO";
 
 return 0;
}
             