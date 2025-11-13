#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E5 + 5;
map<pair<ll, ll>, ll> dp;

unordered_map<pair<ll,ll>, ll, pair_hash> dp;
ll rec(const vector<pair<ll, ll>> &a, ll currIdx, ll w, ll currWeight, ll currSum)
{
    if(currIdx == a.size()) 
    {
        if(currWeight > w) return 0;
        else return currSum;
    }

    if(dp.count({currWeight, currIdx})) return dp[{currWeight, currIdx}];

    ll nibona = rec(a, currIdx + 1, w, currWeight, currSum);
    ll nibo = rec(a, currIdx + 1, w, currWeight + a[currIdx].first, currSum + a[currIdx].second);

    return dp[{currWeight, currIdx}] = max(nibona, nibo);
}
void solve()
{
    ll n, w; cin >> n >> w;
    vector<pair<ll, ll>> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    // memset(dp, -1, sizeof(dp));
    cout << rec(a, 0ll, w, 0ll, 0ll) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t = 1;
    for(ll tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}