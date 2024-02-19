#include <string>
#include <iostream>
using namespace std;
 
int main() {
 int games, A=0, D=0; string winner;
 cin >> games >> winner;
 for (int i = 0; i < games; ++i) {
  if (winner[i] == 'A') A++;
  else D++;
 } if (A > D) cout << "Anton";
 else if (D > A) cout << "Danik";
 else cout << "Friendship";
 
 return 0;
}
             