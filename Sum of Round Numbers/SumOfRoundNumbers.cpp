#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=1 ; i<=t ; i++){
        int n;
        cin >> n;
        int pos=0, N=n, j=0;
        int digit[5];
        int position[5];
        while(N > 0){
            if(N % 10 == 0){
                N = N / 10;
                pos++;
                continue;
            }
            digit[j] = N % 10;
            position[j] = pos;
            N = N / 10;
            pos++;
            j++;
        }
        cout << j << endl;
        for(int k=0 ; k<j ; k++){
            cout << digit[k] * pow(10, position[k]) << " ";
        }
        cout << endl;
    }
    
    return 0;
}
