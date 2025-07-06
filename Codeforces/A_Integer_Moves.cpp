#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int x, y; cin >> x >> y;

    int dist = (x * x) + (y * y);
    int tmp = dist;
    dist = sqrt(dist);
    // cout << dist << nl;

    if(x == 0 && y == 0) 
    {
        cout << 0 << nl; return;
    }
    if((dist * dist) == tmp) cout << 1 << nl;
    else cout << 2 << nl;
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