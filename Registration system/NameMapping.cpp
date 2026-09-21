#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    map <string, int> name;
    for(int i=0 ; i<n ; i++){
        string s;
        cin >> s;
        name[s]++;
        if(name[s] == 1){
            cout << "OK\n";
        }
        else{
            cout << s << name[s]-1 << "\n";
        }
    }
 
    return 0;
}
