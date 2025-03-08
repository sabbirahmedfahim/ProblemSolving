#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n; string s; cin >> n >> s;

    ll up = count(all(s), '-'), down = count(all(s), '_');
    if(up < 2 || down == 0)
    {
        cout << 0 << nl; return;
    }
    // cout << "have answer" << nl;

    ll halfOfUp = up/2ll;
    ll restOfUp = up - halfOfUp;
    // string x; 
    // for (int i = 0; i < halfOfUp; i++) x += '-';
    // for (int i = 0; i < down; i++) x += '_';
    // for (int i = 0; i < restOfUp; i++) x += '-';

    // cout << x << nl;
    ll ans = halfOfUp * restOfUp * down;

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