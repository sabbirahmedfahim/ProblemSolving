#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n; cin >> n;
    // shobar subarray ber korbo

    vector<ll> a(n); for(auto &e : a) cin >> e;

    map<ll, ll> mp;
    for (int i = 0; i < n;)
    {
        ll len = 0, data = a[i];
        while (i < n && a[i] == data)
        {
            len++; i++;
        }
        if(!mp.count(data)) mp[data] = len;
        else mp[data] = max(len, mp[data]);
    }
    
    ll res = 1E18;
    for(auto [x, y] : mp)
    // for(pair<ll, ll> x : mp)
    {
        res = min(x * (n - y), res);
        // cout << x.first << " " << x.second << nl;
    }


    cout << res << nl;
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