#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll b, c, d; cin >> b >> c >> d;

    map<tuple<int, int, int>, int> mp;
    mp[{0, 0, 0}] = 0;
    mp[{0, 0, 1}] = 1;
    mp[{0, 1, 0}] = 0;
    mp[{0, 1, 1}] = -1;
    mp[{1, 0, 0}] = -1;
    mp[{1, 0, 1}] = 1;
    // mp[{1, 0, 1}] = 0; // it is also accurate hahaha
    mp[{1, 1, 0}] = 1;
    mp[{1, 1, 1}] = 0;

    ll ans = 0;
    for (int bit = 60; bit >= 0; bit--)
    {
        int x = ((b>>bit) & 1), y = ((c>>bit) & 1), z = ((d>>bit) & 1);
        if(mp[{x, y, z}] == -1)
        {
            cout << -1 << nl; return;   
        }
        if(mp[{x, y, z}] == 1) ans += (1ll<<bit);
    }
    cout << ans << nl;
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