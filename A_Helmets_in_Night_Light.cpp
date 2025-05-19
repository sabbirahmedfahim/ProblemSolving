// took hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, p; cin >> n >> p;

    vector<int> x(n),y(n);
    map<int, int> mp;
    for(auto &e : x) cin >> e;
    for(auto &e : y) cin >> e;

    for (int i = 0; i < n; i++)
    {
        mp[y[i]] += x[i];
    }
    
    int need = n;
    ll res = 0;
    for(auto [cost, person] : mp)
    {
        // cout << cost << " " << person << nl;

        res += p; need--;
        if(need == 0) break;

        if(p <= cost)
        {
            res += 1ll * p * need;
            cout << res << nl; return;
        }

        res += (cost * min(person, need));
        need -= min(need, person);
        if(need == 0) break;
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