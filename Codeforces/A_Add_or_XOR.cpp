#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll a, b, x, y; cin >> a >> b >> x >> y;

    ll cost = 0;

    if(a > b)
    {
        if((a ^ 1) == b) cout << y << nl;
        else cout << -1 << nl; 
        return;
    }

    if(a == b)
    {
        cout << 0 << nl; return;
    }

    if(x > y) // maximize y count
    {
        ll need = b - a;
        ll forX = need/2;
        
        if((a & 1) && (need & 1)) forX++;
        cost += x * forX;
        cost += y * (need - forX);

        cout << cost << nl;
    }
    else 
    {
        cost += (b - a) * x;
        cout << cost << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}