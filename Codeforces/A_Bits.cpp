// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll l, r; cin >> l >> r;
    if(l == r)
    {
        cout << l << nl; return;
    }

    ll arektaNum = 0;
    for (int i = 63; i >= 0; i--)
    {
        int r_bit = (r >> i) & 1, l_bit = (l >> i) & 1;

        if(r_bit && l_bit) arektaNum += (1ll << i);
        else if(r_bit && !l_bit)
        {
            arektaNum += (1ll << i) - 1;
            break;
        }
    }
    
    if(__builtin_popcountll(r) > __builtin_popcountll(arektaNum)) cout << r << nl;
    else cout << arektaNum << nl;
    
    // lesson -> __builtin_popcount works for 32 bits only!!
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