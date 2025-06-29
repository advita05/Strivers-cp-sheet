#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    long long t, a,b;
    cin>>t;
    while (t--) {
        cin>>a>>b;
        if(a<b) a=a*2;
        else b=b*2;
        int res = max(a,b)*max(a,b);
        cout<<res<<endl;
    }
    return 0;
}