#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char str[n];
    for(int i=0 ; i<n ; i++){
        cin >> str[i];
    }
    int A=0 , D=0;
    for(int i=0 ; i<n ; i++){
        if(str[i] == 'A'){
            A++;
        }
        else if(str[i] == 'D'){
            D++;
        }
    }
    if(A>D){
        cout << "Anton";
    }
    else if(D>A){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }
    
    return 0;
}
