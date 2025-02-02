#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    float x, y; cin >> x >> y;

    if(x == 0 && y == 0) cout << "Origem" << nl;
    else if(y == 0) cout << "Eixo X" << nl;
    else if(x == 0) cout << "Eixo Y" << nl;

    if(x == 0 || y == 0) return 0;

    if(x >= 0 && y >= 0) cout << "Q1" << nl;
    else if(x < 0 && y >= 0) cout << "Q2" << nl;
    else if(x < 0 && y < 0) cout << "Q3" << nl;
    else cout << "Q4" << nl;


    return 0;
}