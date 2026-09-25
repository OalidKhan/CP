#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i=0 ; i<n ; i++){
        int cnt = 1;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<=arr[j-1]){
                cnt++;
            }
            else{
                break;
            }
        }
        for(int j=i-1 ; j>=0 ; j--){
            if(arr[j]<=arr[j+1]){
                cnt++;
            }
            else{
                break;
            }
        }
        if(cnt>count){
            count = cnt;
        }
    }
    cout << count;
    
    return 0;
}
