#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int x = l;
       int y = l*2;
        if(y<=r) cout<<x<<" "<<y<<endl;
        else cout<<-1<<" "<<-1<<endl;
    }
    return 0;
}