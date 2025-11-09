// resolved from LLM
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E5 + 5;
int dp[N];
int rec(vector<int> &a, int idx)
{
    if(idx == a.size() - 1) return 0;

    if(dp[idx] != -1) return dp[idx];

    int x = abs(a[idx] - a[idx + 1]) + rec(a, idx + 1);
    int y = INT_MAX;
    if(idx + 2 < a.size()) y = abs(a[idx] - a[idx + 2]) + rec(a, idx + 2);

    return dp[idx] = min(x, y);
}
void solve()
{
    int n; cin >> n;
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