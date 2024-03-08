#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
 
int main() {
    int drinks; double fr=0;
    cin >> drinks;
 
    for (int i = 0; i < drinks; ++i)
    {   
        double temp;
        cin >> temp;
        fr += temp;
    }
 
    cout << fixed << setprecision(12) << (fr / drinks) << endl;
 
 
                           
    return 0;
}