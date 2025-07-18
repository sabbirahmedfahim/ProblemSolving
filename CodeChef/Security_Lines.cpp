#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >>n;
    vector<int> a(n); for(auto &e : a) cin >> e;

    int mn = a[0];
    for (int i = 1; i < n; i++)
    {
        a[i]++;
        a[i] = max(0, a[i] - i);
    }

    for (int i = 1; i < n; i++)
    {
        mn = min(mn, a[i] + i);
    }
    
    cout << mn << nl;
    // print(a);
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