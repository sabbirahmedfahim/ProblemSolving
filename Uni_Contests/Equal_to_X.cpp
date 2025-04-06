#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int l, r, x; cin >> l >> r >> x;

    ll hi = r, lo = l;

    while (lo <= hi)
    {
        ll mid = lo + (hi-lo)/2;
        ll data = mid + x;
        if(data >= l && data <= r)
        {
            cout << data << " " << mid << nl; return;
        }
        else if(data > hi) hi = mid - 1;
        else lo = mid + 1;
    }
    
    cout << -1 << " " << -1 << nl;
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