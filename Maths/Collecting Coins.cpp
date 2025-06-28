#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t, a, b, c, n;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> n;

        int res = a + b + c + n;
        if (res % 3 != 0) cout<<"NO" << endl;
        else if(a>res/3 || b>res/3 || c>res/3) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}