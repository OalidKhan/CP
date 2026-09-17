#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,n,w;
    cin >> k >> n >> w;
    int t=0;
    for(int i=1 ; i<=w ; i++){
        t = t + (i*k);
    }
    if(t > n){
        cout << (t-n);
    }
    else{
        cout << "0";
    }
    
    return 0;
}
