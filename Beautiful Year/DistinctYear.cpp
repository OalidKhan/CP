#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin >> y;
    for(int i=y+1 ;  ; i++){
        int Y = i;
        int arr[4];
        int j=0;
        while(Y != 0){
            arr[j] = Y % 10;
            Y = Y / 10;
            j++;
        }
        int flag=0;
        for(int k=0 ; k<4 ; k++){
            for(int l=k+1 ; l<4 ; l++){
                if(arr[k] == arr[l]){
                    flag++;
                    break;
                }
            }
            if(flag > 0){
                    break;
                }
        }
        if(flag == 0){
            cout << i;
            break;
        }
    }
    
    return 0;
}
