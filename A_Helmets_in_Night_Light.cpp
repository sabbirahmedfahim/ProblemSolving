#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool cmp(pair<ll, ll> i, pair<ll, ll> j)
{
    if(i.second != j.second) return i.second < j.second;
    return i.first > j.first;
}
void solve()
{
    ll n, p; cin >> n >> p;
    vector<ll> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    vector<pair<ll, ll>> x(n);
    for (int i = 0; i < n; i++)
    {
        x[i].first = a[i];
        x[i].second = b[i];
    }
    
    sort(x.begin(), x.end(), cmp);

    ll cost = 0; cost += p;
    ll person = 0, need = n;
    need--;

    for(auto [i, j] : x)
    {
        cost += min(p, j) * min(need, i);
        need -= min(need, i);

        if(need == 0) break;
    }
    // cout << nl;
    cout << cost << nl;
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