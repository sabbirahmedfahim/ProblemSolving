#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cerr << e << " "; cerr << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    map<int, deque<int>> dist;
    map<int, int> prev;
    for (int i = 1; i <= n; i++)
    {
        if(!dist.count(a[i])) 
        {
            dist[a[i]].push_back(i - 1); prev[a[i]] = i;
        }
        else 
        {
            dist[a[i]].push_back(i - prev[a[i]] - 1);
            prev[a[i]] = i;
        }
    }
    
    for(auto [x, y] : dist)
    {
        dist[x].push_back(n - prev[x]);
        // cerr << x << " --> " << nl;
        // print(y);
    }

    // cerr << nl;

    for(auto &[x, y] : dist)
    {
        sort(all(dist[x]));
        int tmp = dist[x].back(); dist[x].pop_back();
        dist[x].push_back(tmp / 2);
        sort(all(dist[x]));
    }

    int mn = 2E9;
    for(auto [x, y] : dist)
    {
        // cerr << x << " --> " << nl;
        // print(y);

        mn = min(mn, dist[x].back());
    }
    cout << mn << nl;
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