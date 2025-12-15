// resolved from the TLE Eliminators
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    map<int, int> freq;
    for(auto e : a) freq[e % m]++;

    int cnt = 0;
    cnt += freq.count(0);

    for (int i = 1; i < m; i++)
    {
        int x = freq[i], y = freq[(m - i)];
        int mn = min(x, y);

        if(x == 0 && y == 0) continue;

        x -= min(mn + 1, x);
        y -= min(mn + 1, y);

        cnt++;

        cnt += x;
        cnt += y;
        auto it = freq.find(i);
        auto it2 = freq.find((m - i));

        if(freq.count(i)) freq.erase(i);
        if(freq.count((m - i))) freq.erase((m - i));
    }
    
    cout << cnt << nl;
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