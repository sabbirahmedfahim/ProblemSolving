#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int a, b; cin >> a >> b;

    if(b >= a)
    {
        cout << -1 << nl; return;
    }

    int cnt = 0;

    while (a > b && b > 1)
    {
        if(a - 1 == b) break;

        a-=2; b--; cnt++;
    }

    cnt++;

    cout << cnt << nl;
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