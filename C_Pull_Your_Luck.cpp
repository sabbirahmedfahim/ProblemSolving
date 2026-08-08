#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x, p; cin >> n >> x >> p;
    // p = min(p, n);

    int mnDis = n - x;
    if(mnDis > (p * (p + 1)/2)) 
    {
        cout << "No" << nl; return;
    }
    // cout << "have ans" << nl; return;   

    cout << "No" << nl;
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