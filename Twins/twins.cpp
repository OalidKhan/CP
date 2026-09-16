#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum += arr[i];
    }
    int count = 1 , s = 0;
    for(int i=n-1 ; i>=0 ; i--){
        sum = sum - arr[i];
        s = s + arr[i];
        if(s > sum){
            break;
        }
        count++;
    }
    cout << count;
    
    return 0;
}
