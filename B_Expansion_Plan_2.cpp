#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x, y; cin >> n >> x >> y;
    x = abs(x), y = abs(y);
    string s; cin >> s;

    int xx = 0, diaxx = 0;
    for(auto e : s)
    {
        if(e == '4') xx++;
        else xx++, diaxx++;
    }

    cerr << xx << " : " << diaxx << nl;

    if(abs(diaxx - xx) > max(x, y) && max(x, y) <= xx) cout << "YES" << nl;
    else cout << "NO" << nl;
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