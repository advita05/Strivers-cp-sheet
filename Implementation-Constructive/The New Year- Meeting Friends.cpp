#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
 
int main() {
    int x1 , x2 , x3;
    cin>>x1>>x2>>x3;
 
    vector<int> arr = {x1,x2,x3};
    sort(arr.begin(),arr.end());
 
    int total = (arr[2]-arr[1])+(arr[1]-arr[0]);
    cout<<total<<"\n";
    return 0;
}