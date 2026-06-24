#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    multiset<int> ml;
    for(auto e : b) ml.insert(e);

    for (int i = 0; i < n; i++)
    {
        auto it = ml.lower_bound(a[i]);
        if(it == ml.end())
        {
            cout << -1 << nl; return;
        }

        a[i] = *it;
        ml.erase(it);
    }

    // print(a);

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(i == j) continue;
            if(a[i] > a[j]) 
            {
                cnt++; swap(a[i], a[j]);
            }
        }
    }

    cout << cnt << nl;
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