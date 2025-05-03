#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> a(n); for(auto &e : a) cin >> e;
    int mn = *min_element(all(a));
    // print(a);

    if(mn > 0)
    {
        cout << 1 << nl;
        cout << 1 << " " << n << nl;
        return;
    }

    if(a[0] == 0 && a.back() == 0)
    {
        cout << 3 << nl;
        cout << 1 << " " << 2 << nl;
        cout << 2 << " " << n-1 << nl;
        cout << 1 << " " << 2 << nl;
    }

    // 0....!0 or !0....0 __beg
    if(a[0] != 0)
    {
        cout << 2 << nl;
        cout << 2 << " " << n << nl;
        cout << 1 << " " << 2 << nl;
        return;
    }
    if(a.back() != 0)
    {
        cout << 2 << nl;
        cout << 1 << " " << n-1 << nl;
        cout << 1 << " " << 2 << nl;
        return;
    }
    // 0....!0 or !0....0 __end
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