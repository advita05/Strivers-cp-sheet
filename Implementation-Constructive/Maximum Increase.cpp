#include <bits/stdc++.h>
#include<vector>
using namespace std;
 
int main() {
    int n ; 
    cin>>n;
 
    vector<int> a(n);
    for(int i = 0 ; i<n ; i++){
        cin>>a[i];
    }
    int l = 0 , r = 0 ;
    int res = 1;
 
    while(r<n){
        if(a[r]>a[r-1]){
            res = max(res,r-l+1);
            r++;
        }
        else{
            l=r;
        r++;        }
    }
    cout<<res<<"\n";
    return 0;
}