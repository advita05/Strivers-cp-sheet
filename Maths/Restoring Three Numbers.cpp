#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    vector < int > a(4);
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    cout<<a[3]-a[0]<<" "<<a[3]-a[1]<<" "<<a[3]-a[2]<<endl;
    return 0;
}