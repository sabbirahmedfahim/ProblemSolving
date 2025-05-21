#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int x, y, k; cin >> x >> y >> k;

    int cur = -1;
    if(x >= y)
    {
        cur = min(x, k);
        x -= cur;
    }
    else cur = min(y, k), y -= cur;

    if(x >= y)
    {
        if(x > cur) cout << "Bob" << nl;
        else cout << "Alice" << nl;
    }
    else 
    {
        if(y > cur) cout << "Bob" << nl;
        else cout << "Alice" << nl;
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