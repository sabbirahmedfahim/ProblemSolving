#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int x, d; cin >> x >> d;

    // print(st);

    int cnt = 0;
    for (int i = 2; i * i <= x; i++)
    {
        if(x % i == 0 && i % d == 0 && (x / i) % d == 0 && (i / d) % d != 0 && ((x / i) / d) % d != 0)
        {
            // cerr << i << ' ' << x / i << nl;
            cnt++;
        }
        if(x % i == 0 && i % d == 0 && (x / i) % d == 0)
        {
            cerr << "#" << i << ' ' << x / i << nl;
        }
    }
    
    if(cnt >= 2) cout << "YES" << nl;
    else cout << "NO" << nl;
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