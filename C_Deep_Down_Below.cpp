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

    vector<int> adj[n];

    vector<pair<int, int>> whoFirst;
    for (int i = 0; i < n; i++)
    {
        int k; cin >> k;
        int mx = 0;
        for (int j = 0; j < k; j++)
        {
            int data; cin >> data;
            if(j == 0) mx = data + 1;

            mx = max(mx, data - i);

            adj[i].push_back(data);
        }
        whoFirst.push_back({mx, i});
    }
    sort(all(whoFirst));

    for(auto [x, y] : whoFirst)
    {
        cout << x << " --> " << y << nl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < adj[i].size(); j++)
    //     {
    //         cout << adj[i][j] << " ";
    //     }
    //     cout << nl;
    // }

    auto canWePlace = [&] (int mid)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < adj[whoFirst[i].second].size(); j++)
            {
                // cerr << adj[whoFirst[i].second][j] << " ";
                if(mid > adj[whoFirst[i].second][j]) mid++;
                else return false;
            }
            // cerr << nl;
        }
        return true;
    };

    // if(canWePlace(13)) cout << "working" << nl;
    // else cout << "Fix Bug" <<nl;
    
    int lo = 0, hi = 1E18, res = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if(canWePlace(mid))
        {
            res = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    
    cout << res << nl;
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