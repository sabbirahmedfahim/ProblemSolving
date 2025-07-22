#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
let, ans is 1 or 2
*/
void solve()
{
    ll a, b, k; cin >> a >> b >> k;

    // if(k >= max(a, b)) 
    // {
    //     cout << 1 << nl; return;
    // }

    ll GCD = __gcd(a, b);
    // cout << GCD << nl;
    
    ll A = a/GCD, B = b/GCD;
    if(max(A, B) <= k) cout << 1 << nl;
    else cout << 2 << nl;
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