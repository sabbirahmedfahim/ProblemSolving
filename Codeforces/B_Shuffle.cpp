#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x, m; cin >> n >> x >> m;

    int currL = x, currR = x;

    while (m--)
    {
        int l, r; cin >> l >> r;

        if(l <= currL && r >= currR)
        {
            currL = l, currR = r;
        }
        else if(l <= currL && currL <= r) currL = l;
        else if(r >= currR && currR >= l) currR = r;
    }

    cout << currR - currL + 1 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}