#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    if(__builtin_popcount(n) == 1)
    {
        cout << -1 << nl; return;
    }

    int a, b;
    for (int bit = 0; bit < 30; bit++)
    {
        if((n>>bit) & 1)
        {
            a = (1ll << bit); break;
        }
    }
    
    cout << a << " " << (n ^ a) << nl;
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