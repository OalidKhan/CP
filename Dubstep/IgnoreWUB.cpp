#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    bool wordStarted = false;
    for(int i = 0; i < len; i++) {
        if(i + 2 < len && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i += 2;
            if(wordStarted && i + 1 < len) {
                cout << " ";
            }
        }
        else {
            cout << s[i];
            wordStarted = true;
        }
    }

    return 0;
}
