#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int give[101];
    int rec[101];
    int p ;
    for(int i = 1; i<=n ; i++){
        cin>>p;
        give[i]=p;
        rec[p]=i;
    }
    for(int i = 1  ;i<=n ; i++){
        cout<<rec[i]<<" ";
    }
    return 0;
}