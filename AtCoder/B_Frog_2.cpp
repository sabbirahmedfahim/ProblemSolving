#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E5 + 5;
int dp[N];
int k;
int rec(vector<int> &a, int idx)
{
    if(idx == a.size() - 1) return 0;

    if(dp[idx] != -1) return dp[idx];

    vector<int> x;
    for (int i = 1; i <= k; i++)
    {
        if(i + idx < a.size()) x.push_back(abs(a[idx] - a[idx + i]) + rec(a, idx + i));
    }
    sort(all(x));

    return dp[idx] = x.front();
}
void solve()
{
    int n; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    memset(dp, -1, sizeof(dp));
    cout << rec(a, 0);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}