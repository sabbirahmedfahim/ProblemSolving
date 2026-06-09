#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k1, k2; cin >> n >> k1 >> k2;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        if(a[i] != b[i]) ml.insert(abs(a[i] - b[i]));
    }
    
    int k = k1 + k2;

    while (k > 0 && !ml.empty())
    {
        k--;
        auto it = prev(ml.end());
        int tmp = *it;
        ml.erase(it);

        if(tmp > 1) ml.insert(tmp - 1);
    }
    // cerr << k << nl;

    if(k > 0 && ml.empty())
    {
        // cerr << "#";
        if(k & 1) cout << 1 << nl;
        else cout << 0 << nl;
        return 0;
    }

    int ans = 0;
    for(auto e : ml)
    {
        ans += e * e;
    }
    cout << ans << nl;

    return 0;
}