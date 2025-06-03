#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int a, b, c, d; cin >> a >> b >> c >> d;
    int cnt = 0;

    if(a > c && b > d) cnt++;
    if(a > d && a > d) cnt++;
    if(b > c && a > d) cnt++;
    if(b > d && a > c) cnt++;

    cout << cnt << nl;
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