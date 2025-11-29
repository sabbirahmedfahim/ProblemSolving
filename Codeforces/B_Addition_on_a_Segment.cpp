#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    sort(all(a)); reverse(all(a));

    ll sum = accumulate(all(a), 0ll);

    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 0) break;

        sum--;
        if(sum >= n - 1) curr++;
    }
    cout << curr << nl;
}
int_fast32_t main()
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