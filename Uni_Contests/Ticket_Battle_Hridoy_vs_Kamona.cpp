#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int a, b, x; cin >> a >> b >> x;

    if(x <= a)
    {
        cout << a-x << " " << b << nl;
    }
    else
    {
        // x > a
        cout << 0 << " ";
        x -= a;
        if(b-x < 0)
        {
            cout << 0 << nl; return;
        }
        cout << b-x << nl;
    }
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