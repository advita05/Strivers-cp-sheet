#include <iostream>
using namespace std;
 
int main()
{
    string x;
    cin >> x;
    for(int i = 0 ; i<x.size() ; i++){
        int digit = x[i]-'0';
        int result = 9-digit;
        
        if(result<digit){
            if(i==0 && result==0){
                continue;
            }
            x[i]=result+'0';
        }
    }
    cout<<x<<endl;
    return 0 ;
}