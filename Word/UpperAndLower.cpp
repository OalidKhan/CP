#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    int upper=0, lower=0;
    for(int i=0 ; i<len ; i++){
        if(s[i]>='a' && s[i]<='z'){
            lower++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            upper++;
        }
    }
    if(lower>=upper){
        for(char &c : s){
            c = tolower(c);
        }
    }
    else{
        for(char &c : s){
            c = toupper(c);
        }
    }
    cout << s;
    
    return 0;
}
