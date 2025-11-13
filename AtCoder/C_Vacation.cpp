#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E5 + 5;
int dp[4][N];
int rec(const vector<tuple<int, int, int>> &x, int n, int currIdx, int type)
{
    if(currIdx == n) return 0;

    if(dp[type][currIdx] != -1)
    {
        // cout << "OK" << nl; 
        return dp[type][currIdx];
    }

    auto [a, b, c] = x[currIdx];
    if(type == 1)
    {
        return dp[type][currIdx] = a + max(rec(x, n, currIdx + 1, 2), rec(x, n, currIdx + 1, 3));
    }
    if(type == 2)
    {
        return dp[type][currIdx] = b + max(rec(x, n, currIdx + 1, 1), rec(x, n, currIdx + 1, 3));
    }
    if(type == 3)
    {
        return dp[type][currIdx] = c + max(rec(x, n, currIdx + 1, 1), rec(x, n, currIdx + 1, 2));
    }
}
void solve()
{
    int n; cin >> n;
    vector<tuple<int, int, int>> x(n);

    for (int i = 0; i < n; i++)
    {
        int a, b, c; cin >> a >> b >> c;
        x[i] = {a, b, c};
    }
    
    memset(dp, -1, sizeof(dp));

    int mx = 0;
    mx = max(mx, rec(x, n, 0, 1));
    mx = max(mx, rec(x, n, 0, 2));
    mx = max(mx, rec(x, n, 0, 3));
    
    cout << mx << nl;

    // cout << rec(x, n, 0, 1) << nl;
    // cout << rec(x, n, 0, 2) << nl;
    // cout << rec(x, n, 0, 3) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}