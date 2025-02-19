#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    vector<int> v(3); for(auto &e : v) cin >> e;
    sort(all(v));

    if(v[0] == v[1] && v[1] == v[2]) cout << "Equilateral" << nl; // all side equal
    else if(v[0] + v[1] <= v[2]) cout << "Not a triangle" << nl;
    else if(v[0] == v[1] || v[1] == v[2]) cout << "Isosceles" << nl;
    else cout << "Scalene" << nl;

    return 0;
}