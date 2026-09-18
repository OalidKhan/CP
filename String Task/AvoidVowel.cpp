#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    char str2[100] = {0};
    int count = 0;
    for(int i=0,j=0 ; str[i] != '\0' ; i++){
        if(str[i] == 'A' || str[i] == 'O' || str[i] == 'Y' || str[i] == 'E' || str[i] == 'U' || str[i] == 'I' || str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i'){
            continue;
        }
        else{
            str2[j] = str[i];
            j++;
            count++;
        }
    }
    for(char &c : str2){
        c = tolower(c);
    }
    for(int i=0 ; i<count ; i++){
        cout << "." << str2[i];
    }
    return 0;
}
