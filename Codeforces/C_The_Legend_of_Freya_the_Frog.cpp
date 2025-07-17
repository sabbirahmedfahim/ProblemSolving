#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int x, y, k; cin >> x >> y >> k;

    int xMoves = x/k + (x%k != 0), yMoves = y/k + (y%k != 0);

    if(xMoves > yMoves) cout << 2ll * xMoves - 1 << nl;
    else cout << 2ll * yMoves << nl;
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