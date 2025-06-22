#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    unordered_map<string, int> faces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}};
 
    int cnt = 0;
 
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        cnt += faces[s];
    }
 
    cout << cnt << "\n";
 
    return 0;
}