#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool cmp(pair<int, int> x, pair<int, int> y)
{
    return x.first < y.first;
}
void solve()
{
    int n, c; cin >> n >> c;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    vector<pair<int, int>> costArray(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x = i + a[i], y = (n - i + 1) + a[i];
        costArray[i] = {min(x, y), i};
    }
    sort(all(costArray), cmp);
    map<int, int> iKoi;
    for (int i = 1; i <= n; i++)
    {
        iKoi[costArray[i].second] = i;
    }
    for(auto [u, v] : costArray) cout << u << " " << v << nl; cout << nl;

    for(auto [u, v] : iKoi) cout << u << " " << v << nl; cout << nl;

    // print(costArray);

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = i + a[i], tmpC = c;
        int cur = 0;
        if(x <= tmpC)
        {
            cur++;
            tmpC -= x;
            for (int j = 1; j <= n; j++)
            {
                int u = costArray[j].first, v = costArray[j].second;
                if(v == i) continue;

                if(u <= tmpC)
                {
                    cur++;
                    tmpC -= u;
                }
            }
        }
        res = max(res, cur);
    }
    
    cout << res << nl;
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