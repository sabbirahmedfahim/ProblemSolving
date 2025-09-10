#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int a,b,c,d; cin >> a >> b >> c >> d;

    int x = max(a, b), y = min(a, b);

    bool who = true;
    while (1)
    {
        if(y == 0 && x > 2)
        {
            cout << "NO" << nl; return;
        }
        if(x == 0 || y == 0) break;

        if(who) x -= min(x, 2);
        else y --;

        who = !who;
    }
    
    c -= a, d -= b;
    x = max(c, d), y = min(c, d);

    who = true;
    while (1)
    {
        if(y == 0 && x > 2)
        {
            cout << "NO" << nl; return;
        }
        if(x == 0 || y == 0) break;

        if(who) x -= min(x, 2);
        else y --;

        who = !who;
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