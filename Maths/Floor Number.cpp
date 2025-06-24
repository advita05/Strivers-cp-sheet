#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        if (n <= 2) cout << 1 << endl;
        else {
            n = n - 2;
            int res = ceil(1.0 * n / x) + 1;
            cout << res << endl;
        }
    }
    return 0;
}