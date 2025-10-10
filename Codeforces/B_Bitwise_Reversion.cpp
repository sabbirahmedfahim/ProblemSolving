#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int x, y, z; cin >> x >> y >> z;

    int mx = max(__lg(x), max(__lg(y), __lg(z)));

    for (int i = mx; i >= 0; i--)
    {
        int currOnBits = 0;
        currOnBits += (x >> i) & 1;
        currOnBits += (y >> i) & 1;
        currOnBits += (z >> i) & 1;

        if(currOnBits == 2)
        {
            cout << "NO" << nl; return;
        }
    }

    cout << "YES" << nl;
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

