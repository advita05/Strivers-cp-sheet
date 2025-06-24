#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        int sum = 0, odd = 0, even = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            sum += x;
            if (x % 2) even++;
            else odd++;
        }
        if (sum % 2 ) cout << "YES" << endl;
        else if (odd >= 1 && even >= 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}