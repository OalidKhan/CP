#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1;
    string str2;
    cin >> str1 >> str2;
    for (char &c : str1) {
        c = tolower(c);
    }
    for (char &c : str2) {
        c = tolower(c);
    }
    int size = 0;
    for(int i=0 ; str1[i] != '\0' ; i++){
        if(str1[i] != str2[i]){
            size = str1[i] - str2[i];
            break;
        }
    }
    if(size == 0){
        cout << "0";
    }
    else if(size < 0){
        cout << "-1";
    }
    else{
        cout << "1";
    }
    
    return 0;
}
