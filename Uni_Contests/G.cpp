#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<long double> a(n);
    for(auto &e : a) cin >> e;

    long double left = 0, right = 0, ans = 0;
    for(auto e : a) right += e;

    for (int i = 0; i < n; i++)
    {
        left += a[i];
        right -= a[i];

        ans = max(ans, min(left, right));
    }
    
    cout << fixed << setprecision(3) << ans << nl;
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