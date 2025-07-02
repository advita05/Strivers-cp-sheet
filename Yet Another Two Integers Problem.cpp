#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int diff = abs(a - b);
        diff = ceil(diff / 10.0);
        cout << diff << endl;
    }
    return 0;
}