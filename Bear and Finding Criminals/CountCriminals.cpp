#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a;
    cin >> n >> a;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    a = a - 1;
    int count=0;
    if(arr[a]==1){
        count++;
    }
    for(int i=a-1,j=a+1 ; i>=0 || j<n ; i--,j++){
        if(i>=0 && j<n && arr[i]==1 && arr[j]==1){
            count += 2;
        }
        else if(i<0 && j<n && arr[j]==1){
            count++;
        }
        else if(i>=0 && j>=n && arr[i]==1){
            count++;
        }
    }
    cout << count;
    
    return 0;
}
