// resolved from the Editorial
#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    map<int, int> mp;
    for(auto e : a) mp[k - e % k]++;
    mp.erase(k);

    int who = -1, howMuch = 0;
    for(auto [x, y] : mp)
    {
        if(y >= howMuch) // pick largest dist
        {
            howMuch = y;
            who = x;
        }
    }

    if(who == -1)
    {
        cout << 0 << nl; return;
    }

    // cerr << who << " : " << howMuch << nl;
    cout << (howMuch - 1) * k + who + 1 << nl;
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
/*
k = 3
3 - (1 % 3)
3 - 1 = 2
*/