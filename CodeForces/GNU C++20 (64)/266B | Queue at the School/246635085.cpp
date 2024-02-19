#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int sc, t; string queue;
    cin >> sc >> t >> queue;
 
    for (int sec = 0; sec < t; ++sec) {
        for (int i = 0; i < sc - 1; ++i) {
            if (queue[i] == 'B' && queue[i + 1] == 'G') {
                swap(queue[i], queue[i + 1]);
                ++i;
            }
        }
    } cout << queue;
 
    return 0;
}