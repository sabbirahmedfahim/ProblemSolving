#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> a(n); for(auto &e : a) cin >> e;

    // ll sum = accumulate(all(a), 0ll);
    // cout << sum << nl;

    sort(all(a));
    for (int i = 1; i < n; i++)
    {
        a[i] += a[i-1] - 1;
    }
    cout << a.back() << nl;
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