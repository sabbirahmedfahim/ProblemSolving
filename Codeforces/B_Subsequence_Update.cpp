// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, l, r; cin >> n >> l >> r;
    vector<int> a(n + 1); // 1-based
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    
    if(r - l + 1 == n)
    {
        ll sum = accumulate(all(a), 0ll);
        cout << sum << nl; return;
    }
    
    vector<int> L, R;
    for (int i = 1; i < l; i++) L.push_back(a[i]);
    for (int i = r + 1; i <= n; i++) R.push_back(a[i]);
    for (int i = l; i <= r; i++) 
    {
        L.push_back(a[i]);
        R.push_back(a[i]);
    }

    sort(all(L));
    sort(all(R));
    ll x = 0, y = 0;
    for (int i = 0; i < r-l+1; i++)
    {
        x += L[i], y += R[i];
    }
    
    cout << min(x, y) << nl;
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

