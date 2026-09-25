#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for(int i=0 ; i<t ; i++){
        int a;
        cin >> a;
        int arr[3];
        int flag=0;
        for(int j=0 ; j<3 ; j++){
            cin >> arr[j];
            if(arr[j]==a){
                flag++;
            }
        }
        if(flag==3){
            cout << "0\n";
        }
        else{
            int min = arr[0];
            for(int j=1 ; j<3 ; j++){
                if(arr[j]<min){
                    min = arr[j];
                }
            }
            cout << (a-min) << endl;
        }
    }
    
    return 0;
}
