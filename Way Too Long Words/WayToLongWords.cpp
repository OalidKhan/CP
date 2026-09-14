#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n ; i++){
        string A;
        cin >> A;
        int len = A.length();
        if(len <= 10){
            cout << A << endl;
        }
        else{
            int length = len - 2;
            cout << A[0] << length << A[len-1] << endl;
        }
    }
    
    return 0;
}
