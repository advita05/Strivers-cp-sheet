#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        string s = a[i];
        int sum = 0;
        int zeroCount = 0;
        int evenCount = 0;

        for (char c : s) {
            int digit = c - '0';
            sum += digit;
            if (digit == 0) zeroCount++;
            if (digit % 2 == 0) evenCount++;
        }

        if (sum % 3 == 0 && zeroCount >= 1 && evenCount >= 2)
            cout << "red" << endl;
        else
            cout << "cyan" << endl;
    }

    return 0;
}
