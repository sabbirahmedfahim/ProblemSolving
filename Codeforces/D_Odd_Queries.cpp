#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    ll tot_sum = accumulate(all(a), 0ll);

    vector<ll> prefixSum(n);
    prefixSum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + a[i];
    }

    while (q--)
    {
        int l, r, k; cin >> l >> r >> k;
        l--, r--;

        ll toAdd = 1ll * (r - l + 1) * k;
        ll toReduce = 0;
        if(l != 0) toReduce = prefixSum[r] - prefixSum[l - 1];
        else toReduce = prefixSum[r];

        ll curr_sum = tot_sum - toReduce + toAdd;
        if(curr_sum & 1) cout << "YES" << nl;
        else cout << "NO" << nl;
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