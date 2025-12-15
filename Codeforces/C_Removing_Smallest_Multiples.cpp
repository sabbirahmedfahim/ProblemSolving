// Resolved (not hard, I thought this approach will get TLE, didn't calculate the time complexity)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;
    vector<bool> vis(n, false);

    ll ans = 0;
    for (int i = 0; i < n; i++) // O(n log(n))
    {
        if(s[i] == '0')
        {
            for (int j = i + 1; j <= n; j += (i + 1)) // log(n)
            {
                if(s[j - 1] == '1') break;
                if(vis[j - 1] == true) continue;

                vis[j - 1] = true;
                ans += (i + 1);
            }
        }
    }
    
    cout << ans << nl;
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