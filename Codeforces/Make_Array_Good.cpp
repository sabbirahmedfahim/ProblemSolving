#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int LCM(int a, int b)
{
    return (a / __gcd(a, b)) * b; // safer against overflow
}
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    vector<pair<int, int>> ans;

    for (int i = 0; i < n; i++)
    {
        int x = __builtin_popcountll(a[i]);
        // cerr << x << nl;

        if(x == 1) continue;

        int nearestLeftBit = __lg(a[i]);
        nearestLeftBit++;

        int need = (1 << nearestLeftBit); 
        // cerr << need << nl;
        need -= a[i];

        while (need > 0)
        {
            int toAdd = min(need, a[i]);

            ans.push_back({i + 1, toAdd});

            a[i] += toAdd;
            need -= toAdd;
        }
    }
    
    cout << ans.size() << nl;
    if(!ans.empty())
    {
        for(auto [x, y] : ans) cout << x << " " << y << nl;
    }
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