#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));

    map<ll, ll> mp1, mp2;

    ll sum = 0;
    for (int i = 1, idx = 1; i <= k; i++, idx += 2)
    {
        sum += a[idx] + a[idx + 1];

        mp1[i] = sum;
    }

    sum = 0;
    for (int i = 1, j = n; i <= k; i++, j--)
    {
        sum += a[j];

        mp2[i] = sum;
    }

    // for(auto [x, y] : mp1) cout << x << " --> " << y << nl;
    // cout << nl;
    // for(auto [x, y] : mp2) cout << x << " --> " << y << nl;
    // cout << nl;
    
    ll tot_sum = accumulate(all(a), 0ll);
    ll mn_sum = 1E18;

    for (int i = 0; i <= k; i++)
    {
        sum = mp1[i] + mp2[k - i];
        mn_sum = min(mn_sum, sum);
    }
    
    cout << tot_sum - mn_sum << nl;
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