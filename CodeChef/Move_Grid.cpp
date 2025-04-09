#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a, b, c, d; cin >> a >> b >> c >> d;
    
    int x = 0, y = 0;
    x += a; x -= c;
    y += b; y -= d;

    cout << x << " " << y << nl;

    return 0;
}