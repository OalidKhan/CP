#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count=0;
    for(int i=1; i<=n ; i++){
        int arr[3];
        for(int i=0 ; i<3 ; i++){
            cin >> arr[i];
        }
        int flag=0;
        for(int i=0 ; i<3 ; i++){
            if(arr[i]==1){
                flag++;
            }
        }
        if(flag >= 2){
            count++;
        }
    }
    cout << count;
    
    return 0;
}
