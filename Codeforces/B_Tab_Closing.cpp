#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    double a, b, n; cin >> a >> b >> n;

    // if(a >= b || n == 1)
    // {
    //     cout << 1 << nl;
    //     return;
    // }

    if(min(a, b) == a)
    {
        cout << 1 << nl;
        return;
    }

    double curr = min(b, (a / n));
    double next = min(b, (a/(--n)));

    if(curr == next) cout << 1 << nl;
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