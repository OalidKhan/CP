#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, int> poly;
    poly["Tetrahedron"] += 4;
    poly["Cube"] += 6;
    poly["Octahedron"] += 8;
    poly["Dodecahedron"] += 12;
    poly["Icosahedron"] += 20;
    int count = 0;
    string s[n];
    for(int i=0 ; i<n ; i++){
        cin >> s[i];
        count += poly[s[i]];
    }
    cout << count;

    return 0;
}
