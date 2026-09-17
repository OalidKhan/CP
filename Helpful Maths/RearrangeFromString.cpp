#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int n = (str.length() / 2) + 1;
    int arr[n];
    for(int i=0, j=0 ; str[i] != '\0' ; i++){
        if(str[i] == '+'){
            continue;
        }
        else{
            arr[j] = str[i] - '0';
            j++;
        }
    }
    sort(arr, arr+n);
    for(int i=0 ; i<n ; i++){
        if(i == n-1){
            cout << arr[i];
            break;
        }
        cout << arr[i] << "+";
    }
    
    return 0;
}
