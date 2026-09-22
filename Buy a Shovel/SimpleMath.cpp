#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;
    int K = k;
    int count = 1;
    for(int i=0 ; ; i++){
        if(k%10==0){
            break;
        }
        else if((k-r)%10==0){
            break;
        }
        else{
            k = k + K;
            count++;
        }
    }
    cout << count;
    
    return 0;
}
