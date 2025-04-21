#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m, l, r; cin >> n >> m >> l >> r;

    int x = 0, y = 0;
    for (int i = 1; i <= m; i++)
    {
        if(x + 1 >= l && x + 1 <= r) x++;
        else if(y - 1 >= l && y - 1 <= r) y--;
        // else cout << "what" << nl;
    }
    cout << min(x, y) << " " << max(x, y) << nl;
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