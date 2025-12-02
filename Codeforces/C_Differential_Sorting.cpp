#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    if(a[n - 2] > a[n - 1])
    {
        cout << -1 << nl;
        return;
    }
    if(a[n - 1] < 0)
    {
        if(is_sorted(all(a))) cout << 0 << nl;
        else cout << -1 << nl;
        return;
    }

    cout << n - 2 << nl;
    for (int i = 0; i < n - 2; i++)
    {
        cout << i + 1 << " " << n - 1 << " " << n << nl;
    }
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