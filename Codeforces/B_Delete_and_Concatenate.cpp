#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, cost; cin >> n >> cost;
    deque<int> a(n);
    for(auto &e : a) cin >> e;

    sort(all(a));

    int ans = 0;
    while (a.size() >= 2)
    {
        if(a.front() < cost)
        {
            ans += a.back() - cost;
            a.pop_front();
            a.pop_back();
        }
        else break;
    }
    for(auto e : a) ans += e - cost;

    cout << ans << nl;
    
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