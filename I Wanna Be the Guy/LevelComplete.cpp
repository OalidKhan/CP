#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map <int, int> game;
    int p;
    cin >> p;
    int arr[p];
    for(int i=0 ; i<p ; i++){
        cin >> arr[i];
        game[arr[i]]++;
    }
    int q;
    cin >> q;
    int Arr[q];
    for(int i=0 ; i<q ; i++){
        cin >> Arr[i];
        game[Arr[i]]++;
    }
    int count = 0;
    for(int i=1 ; i<=n ; i++){
        if(game[i] == 0){
            count++;
            break;
        }
    }
    if(count == 0){
        cout << "I become the guy.";
    }
    else{
        cout << "Oh, my keyboard!";
    }
    
    
    return 0;
}
