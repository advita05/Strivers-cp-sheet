#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t, x, y, n;
    cin >> t;
    while (t--) {
        cin >> x >> y >> n;
        int rem = n%x;
        int change = (rem - y + x) % x;
        n -= change;
        cout << n << endl;
    }
    return 0;
}