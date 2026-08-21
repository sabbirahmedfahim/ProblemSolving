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
    // print(a); return;

    int mn = a.back() - a.front();
    for (int i = 0; i < 100; i++)
    {
        a[2] = a[0] + a[1];
        sort(all(a));

        mn = min(mn, abs(a.back() - a.front()));
    }

    cout << mn << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}