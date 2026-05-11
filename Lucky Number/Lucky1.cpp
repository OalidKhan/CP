#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int count,blabla=0;
    for(int i=a ; i<=b ; i++){
        count = 0;
        int t=i,r=0;
        while(t!=0){
            r = t%10;
            
            if(r!=4&&r!=7){
                count=1;
                break;
            }

            t = t/10;
        }
        if(count == 0){
            cout << i << " ";
            blabla++;
        }
    }
    if(blabla == 0){
            cout << -1;
        }
return 0;
}
