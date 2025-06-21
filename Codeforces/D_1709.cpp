// Resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    vector<pair<int, int>> res;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if(a[j - 1] > a[j])
            {
                swap(a[j-1], a[j]);
                res.push_back({1, j}); // 1 based
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if(b[j - 1] > b[j])
            {
                swap(b[j-1], b[j]);
                res.push_back({2, j}); // 1 based
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i] > b[i]) 
        {
            swap(a[i], b[i]);
            res.push_back({3, i + 1}); // 1 based
        }
    }
    
    if(res.empty()) cout << 0 << nl;
    else 
    {
        cout << res.size() << nl;
        for(auto [x, y] : res) cout << x << " " << y << nl;
    }
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