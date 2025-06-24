#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n,k,b,s; cin>>n>>k>>b>>s;

    ll need = k * b;
    if(need > s)
    {
        cout << -1 << nl; return;
    }
    vector<ll> res;
    ll have = s - need;
    have -= min(have, k-1);
    res.push_back(s - have);
    for (int i = 0; i < n-1; i++)
    {
        ll canGive = min(have, k-1);
        res.push_back(canGive);

        have -= canGive;
    }

    if(have)
    {
        cout << -1 << nl; return;
    }

    print(res);
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