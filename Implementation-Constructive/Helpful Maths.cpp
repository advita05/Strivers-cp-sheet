#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
 
    vector<char> digits;
    for(char c: s){
        if(isdigit(c)){
            digits.push_back(c);
        }
    }
    sort(digits.begin(),digits.end());
 
    int ind = 0 ;
    for(int i = 0 ; i<s.size() ; i++){
        if(isdigit(s[i])){
            s[i]=digits[ind++];
        }
    }
    cout<<s<<"\n";
    return 0;
}