#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    vector<int> a(3);
    for(auto &e : a) cin >> e;
    sort(all(a));

    int op = 0;
    op += a[1]/a[0] - 1;
    op += a[2]/a[0] - 1;

    if(a[2]%a[0] != 0 || a[1]%a[0] != 0)
    {
        cout << "NO" << nl; return;
    }

    if(op <= 3) cout << "YES" << nl;
    else cout << "NO" << nl;
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