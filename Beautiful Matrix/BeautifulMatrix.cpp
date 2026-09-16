#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5][5];
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            cin >> arr[i][j];
        }
    }
    int flag = 0;
    int row, col;
    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            if(arr[i][j] > 0){
                row = i;
                col = j;
                flag++;
                break;
            }
            if(flag != 0){
                break;
            }
        }
    }
    
    int r,c;
    r = abs(2-row);
    c = abs(2-col);
    cout << r+c;
    
    return 0;
}
