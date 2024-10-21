#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
/*
Why is the output of the test case 3(-2 -1 1 1) is -1? I initially thought it should be 3 because the steps are:
 -1, 0 -> 0, 1. Oh, I get it now! The point is that 1, 2 is not possible.
*/
void solve()
{
    ll a, b, c, d; cin >> a >> b >> c >> d;
    if(b > d || (d-b+a) < c) cout << -1 << nl;
    else
    {
        ll ans = d-b;
        a += ans;
        cout << ans + abs(a-c) << nl;
    }
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t;
    while (t--) solve();

    return 0;
}