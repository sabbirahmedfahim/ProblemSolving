// Resolved from the Editorial (loved it)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x, y; cin >> n >> x >> y;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    map<int, int> xx, yy;
    for (int i = 0; i < n; i++)
    {
        xx[a[i] % x]++;
        yy[a[i] % y]++;
    }
    
    ll res = 0;
    for (int i = 0; i < n; i++)
    {        
        if(xx.count(x - (a[i] % x))) xx[x - (a[i] % x)]--;
        if(yy.count(a[i] % y)) yy[a[i] % y]--;

        ll fromX = xx[x - (a[i] % x)];
        ll fromY = yy[a[i] % y];

        res += min(fromX, fromY);
        xx.erase(x - (a[i] % x)); yy.erase(a[i] % y);
        cerr << res << nl;
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