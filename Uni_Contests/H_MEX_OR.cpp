#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    long long n, ct = 0, stct = 0; cin >> n;
    
    ll msb = __lg(n);
    ll on_bits = __builtin_popcountl(n);
    // cout << msb + 1 << " " << on_bits << nl;

    if(msb + 1 == on_bits) cout << n + 1 << nl;
    else cout << (1LL << msb) << nl;
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