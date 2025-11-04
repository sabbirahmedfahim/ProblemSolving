#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int r, x, d, n; cin >> r >> x >> d >> n;
    string s; cin >> s;

    int cnt = 0;
    ll data = r;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1')
        {
            data = max(0ll, data - d);

            cnt++;
        }
        else if(data < x)
        {
            data = max(0ll, data - d);

            cnt++;
        }
    }
    
    cout << cnt << nl;
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