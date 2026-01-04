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
    vector<int> adjList[n];

    for (int i = 0; i < n; i++)
    {
        int m; cin >> m;
        while(m--)
        {
            int data; cin >> data;
            adjList[i].push_back(data);
        }
    }
    
    vector<pair<int, int>> mx_N_arr(n);
    for (int i = 0; i < n; i++)
    {
        int curr_mx = 0;
        for (int j = 0; j < adjList[i].size(); j++)
        {
            curr_mx = max(curr_mx, adjList[i][j] + 1 - j);
        }
        // cerr << curr_mx << nl;

        mx_N_arr[i] = {curr_mx, i};a
    }

    sort(all(mx_N_arr));

    auto canWePlace = [&](int mid)
    {
        int curr = mid;
        for (int i = 0; i < n; i++)
        {
            int currI = mx_N_arr[i].second;
            for (int j = 0; j < adjList[currI].size(); j++)
            {
                // cerr << adjList[currI][j] << " ";
                if(curr <= adjList[currI][j]) return false;
                
                curr += 1;
            }
            // cerr << nl;
        }

        return true;
    };
    
    
    int lo = 1, hi = 1E18, res = -1;
    while(lo <= hi)
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
        solve();
    }

    return 0;
}