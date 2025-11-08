#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, x; cin >> n;
    deque<ll> a(n);
    for(auto &e : a) cin >> e;
    cin >> x;

    if(n == 1)
    {
        if(a[0] == x) cout << "YES" << nl;
        else cout << "NO" << nl;
        return;
    }

    // ll mn = *min_element(all(a)), mx = *max_element(all(a));

    for (int i = 0; i < n - 1; i++)
    {
        ll mn = min(a[i], a[i + 1]);
        ll mx = max(a[i], a[i + 1]);

        if(mn <= x && mx >= x)
        {
            cout << "YES" << nl; return;
        }
    }
    cout << "NO" << nl;
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