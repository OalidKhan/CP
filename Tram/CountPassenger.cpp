#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n] = {0};
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        int a,b;
        cin >> a >> b;
        sum = (sum - a) + b;
        arr[i] = sum;
    }
    int mx = *max_element(arr, arr + n);
    cout << mx;
    
    return 0;
}
