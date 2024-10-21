#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define input(v) for(auto &data : v) cin >> data
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    ll n, k; cin >> n >> k;
    // 2X + kY = n
    cout << ((k%2 == 0 && n%2 != 0) ? "NO" : "YES" ) << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}