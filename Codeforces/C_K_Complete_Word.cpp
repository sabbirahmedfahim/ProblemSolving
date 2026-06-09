#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; string s; cin >> n >> k >> s;

    map<char, int> mp;

    int ans = 0;
    vector<char> adj[k];
    for (int i = 0; i < k; i++)
    {
        mp.clear();
        for (int j = i; j < n; j += k)
        {
            mp[s[j]]++;
            adj[i].push_back(s[j]);
        }

        int mx = 0, tot = 0;
        char who;
        for(auto [x, y] : mp)
        {
            // cerr << x << " : " << y << nl;
            if(mx < y)
            {
                mx = y; who = x;
            }
            tot += y;
        }
        // cerr << nl;

        ans += tot - mx;

        for (int j = i; j < n; j += k)
        {
            s[j] = who;
        }
    }

    cout << s << nl;
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        if(s[i] != s[j]) ans++;
    }
    
    
    cout << ans << nl;

    // for(auto e : adj)
    // {
    //     print(e);
    // }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}