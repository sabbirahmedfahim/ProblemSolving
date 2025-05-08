#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int a, b, c; cin >> a >> b >> c;

    // for a
    if(a - abs(b-c) >= 0 || b == c) cout << 1 << " ";
    else cout << 0 << " ";

    // for b
    if(b - abs(a-c) >= 0 || a == c) cout << 1 << " ";
    else cout << 0 << " ";

    // for c
    if(c - abs(b-a) >= 0 || b == a) cout << 1 << " ";
    else cout << 0 << " ";

    cout << nl;
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