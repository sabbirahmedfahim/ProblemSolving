// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n, m, k; cin >> n >> m >> k;

    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<tuple<ll, ll, ll> > op(m + 1);
    for (ll i = 1; i <= m; i++)
    {
        ll l, r, data; cin >> l >> r >> data;
        op[i] = {l, r, data};
    }

    vector<ll> diff(n + 2), diffQuery(m + 2), pref(m + 2); // don't mix n, m size confusiton
    while (k--)
    {
        ll x, y; cin >> x >> y;
        diffQuery[x] += 1;
        diffQuery[y + 1] -= 1;

        // for (int i = x; i <= y; i++) // TLE
        // {
        //     auto ele = op[i];
        //     auto [l, r, data] = ele;
        //     diff[l] += data;
        //     diff[r + 1] -= data;
        // }
    }
    for (ll i = 1; i <= m; i++)
    {
        pref[i] = pref[i-1] + diffQuery[i];
    }
    for (ll i = 1; i <= m; i++) // added the loop instead of TLE
    {
        auto ele = op[i];
        auto[l, r, data] = ele;
        diff[l] += (data * pref[i]);
        diff[r + 1] -= (data * pref[i]);
    }
    
    vector<ll> res(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        res[i] = res[i-1] + diff[i];
        cout << (res[i] + a[i]) << " ";
    }
    cout << nl;

    return 0;
}