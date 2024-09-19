#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;

int main()
{
    // Tetrahedron. Tetrahedron has 4 triangular faces.
    // Cube. Cube has 6 square faces.
    // Octahedron. Octahedron has 8 triangular faces.
    // Dodecahedron. Dodecahedron has 12 pentagonal faces.
    // Icosahedron. Icosahedron has 20 triangular faces.
    int t; cin >> t;
    int cnt = 0;
    while (t--)
    {
        string s; cin >> s;
        if(s == "Tetrahedron") cnt+=4;
        if(s == "Cube") cnt+=6;
        if(s == "Octahedron") cnt+=8;
        if(s == "Dodecahedron") cnt+=12;
        if(s == "Icosahedron") cnt+=20;
    }
    cout << cnt;

    return 0;
}