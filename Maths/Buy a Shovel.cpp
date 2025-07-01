#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int k, r , p;
    cin >> k >> r >> p;
    
    for(int i = 1 ; i<=10 ; i++){
        p = i*k;
        if(p%10==0 || p%10==r){
            cout<<i;
            return 0 ;
        }
    }
    return 0;
}