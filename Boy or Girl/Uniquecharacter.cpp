#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length();
    int arr[26] = {0};
    for(int i=0 ; i<len ; i++){
        if(s[i]>= 'a' && s[i]<= 'z'){
            arr[(s[i]-97)]++;
        }
    }
    int flag=0;
    for(int i=0 ; i<26 ; i++){
        if(arr[i] >= 1){
            flag++;
        }
    }
    if(flag%2==0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    return 0;
}
