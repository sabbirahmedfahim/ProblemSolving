// Resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    
    vector<ll> pref(n + 1);
    pref[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }
    // print(pref);

    for (int i = 1; i <= n; i++)
    {
        ll sum = pref[i];

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