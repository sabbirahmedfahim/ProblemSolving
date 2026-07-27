#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    multiset<int> ml;
    for(auto e : b) ml.insert(e);

    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        int mn = 1E18;
        auto it = ml.lower_bound(a[i]);
        if(it != ml.end()) mn = *it - a[i];

        if(it != ml.begin())
        {
            it--;
            mn = min(mn, a[i] - *it);
        }

        mx = max(mx, mn);
    }

    cout << mx << nl;
    
    return 0;
}