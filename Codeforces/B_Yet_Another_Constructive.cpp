#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n,k,m; cin >> n >> k >> m;

    if(m < k)
    {
        cout << "NO" << nl; return;
    }
    // cout << "have ans" << nl;

    cout << "YES" << nl;

    int curr = 0;
    for (int i = 0; i < k - 1; i++)
    {
        cout << m + 1 << " ";
        curr += m + 1;
    }
    
    cout << m - curr % m << " ";

    for (int i = k; i < n; i++)
    {
        cout << m + 1 << " ";
    }
    cout << nl;
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