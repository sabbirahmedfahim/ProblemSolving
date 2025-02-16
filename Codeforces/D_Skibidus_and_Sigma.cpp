#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, m; cin >> n >> m;

    vector<vector<ll> > v(n, vector<ll> (m, 0));
    vector<pair<ll, ll> > whoIsPriority(n);
    for (int i = 0; i < n; i++)
    {
        ll sum = 0;
        for (int j = 0; j < m; j++)
        {
            ll data; cin >> data;
            sum += data;
            v[i][j] = data;
        }
        whoIsPriority[i] = {sum, i};
    }
    sort(all(whoIsPriority)); reverse(all(whoIsPriority));

    // for(auto e : whoIsPriority)
    // {
    //     cout << e.first << " " << e.second << nl;
    // }

    ll cur = 0, tot = 0, prev = 0;
    vector<ll> dekhi;
    for(auto e : whoIsPriority)
    {
        vector<ll> vec = v[e.second];
        // print(vec);
        for (int i = 0; i < vec.size(); i++)
        {
            cur += vec[i];
            dekhi.push_back(cur);
        }
    }
    // cout << cur << nl;
    // print(dekhi);

    ll ans = accumulate(all(dekhi), 0ll);
    cout << ans << nl;

    // for(auto e : v)
    // {
    //     print(e);
    // }
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