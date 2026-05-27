#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;\
/*
Observation: Alice can replace with GCD while Bob can only LCM
*/
void solve()
{
    ll x, y, k; cin >> x >> y >> k;
    ll GCD, LCM;
    // cout << __gcd(x, y) << " " << (x/__gcd(x, y)) * y << nl;
    while (k--)
    {
        GCD = __gcd(x, y);
        if(x >= y) x = GCD;
        else y = GCD;
        LCM = (x/__gcd(x, y)) * y;
        if(x >= y) x = LCM;
        else y = LCM;
        if(x == y) break; // lesson : x, y er GCD, LCM jokon same hoye jabe tar gcd, lcm always x == y == gcd(x,y) == lcm(x,y) thakbe
    }
    cout << x + y << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    for (int i = 1; i <= t; i++)
    {
        // cout << "tc --> " << i << nl;
        solve();
    }
    

    return 0;
}