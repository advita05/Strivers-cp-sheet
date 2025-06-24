#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int cur = 0, maxx = 0;
    vector<int> ai(n),bi(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> ai[i] >> bi[i];
    }
        for (int i = 0; i < n; i++)
        {
            cur -= ai[i];
            cur += bi[i];
            maxx = max(maxx, cur);
        }
    
    cout << maxx << "\n";
    return 0;
}