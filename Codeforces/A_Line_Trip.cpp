#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x; cin >> n >> x;
    vector<int> a(n); for(auto &e : a) cin >> e;

    // if(n == 1) 
    // {
    //     cout << a[0] << nl; return;
    // }

    int res = a[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, a[i] - a[i-1]);
        if(a[i] > x) break;
    }

    if(x > a[n-1]) res = max(res, 2 * (x - a[n-1]));
    
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