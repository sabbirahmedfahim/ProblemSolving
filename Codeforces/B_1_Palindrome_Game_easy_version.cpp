// Resolved from the editorial (missed the simple observation)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string s; cin >> n >> s;

    int zero = 0;
    for(auto e : s)
    {
        if(e == '0') zero++;
    }
    if(zero == 0)
    {
        cout << "DRAW" << nl;
        return;
    }
    if(zero % 2 == 0 || zero == 1)
    {
        cout << "BOB" << nl;
        return;
    }

    cout << "ALICE" << nl;
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