#include <iostream>
#include <string>
#include <unordered_map> 
using namespace std;
 
int main() {
    int n, totalFaces=0; 
    cin >> n;
    unordered_map<string, int> umap;
    umap["Tetrahedron"] = 4;
    umap["Cube"] = 6;
    umap["Octahedron"] = 8;
    umap["Dodecahedron"] = 12;
    umap["Icosahedron"] = 20;
 
    for (int i = 0; i < n; ++i) {
        string temp;
        cin >> temp;
        totalFaces += umap[temp];
    }
 
    cout << totalFaces << endl;
 
    return 0;
}