#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int res = m*(n/2);
        if(n%2) res += ceil(1.0*m/2);
        cout<<res<<endl;
    }
    return 0;
}