#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    deque<int> a(n), b(m);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    int A = 0, B = 0;
    for (int i = 0; i < n - 1; i++)
    {
        A += a[i] - a[i + 1] + 1;
    }
    for (int i = 0; i < m - 1; i++)
    {
        B += b[i] - b[i + 1] + 1;
    }
    
    A += a.back();
    B += b.back();

    if(A >= B) cout << 1 << nl;
    else cout << 2 << nl;
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