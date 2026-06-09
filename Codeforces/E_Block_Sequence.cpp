#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 2E5 + 5;
int dp[N];
int ok(vector<int> & a, int idx, int n)
{
    if(idx >= n) return 0;

    if(dp[idx] != -1) return dp[idx];

    int nibo = 1E18;
    int nibona = 1 + ok(a, idx + 1, n);
    if(idx + a[idx] < n) nibo = ok(a, idx + a[idx] + 1, n);

    return dp[idx] = min(nibo, nibona);
}
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    for (int i = 0; i < n; i++)
    {
        dp[i] = -1;
    }

    cout << ok(a, 0, n) << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}