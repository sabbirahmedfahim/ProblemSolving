#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int x, y; cin >> x >> y;

    if(x == y || y == 1)
    {
        cout << -1 << nl; return;
    }

    if(x < y)
    {
        cout << 2 << nl; return;
    }

    // cout << "have answer" << nl;

    // x > y
    x--;
    if(x > y) cout << 3 << nl;
    else cout << -1 << nl;
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