// resolved from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    for (int i = 1; i < n - 1; i++)
    {
        if(a[i] == -1) a[i] = 0;
    }
    if(a[0] == -1 && a[n - 1] == -1)
    {
        a[0] = 0; a[n - 1] = 0;
    }
    else if(a[0] == -1) a[0] = a[n - 1];
    else if(a[n - 1] == -1) a[n - 1] = a[0];

    ll sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += a[i + 1] - a[i];
    }
    
    cout << abs(sum) << nl;
    print(a);
}
int_fast32_t main()
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