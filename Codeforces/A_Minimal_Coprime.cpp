#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll x,y; cin >> x >> y;
    // cout << __gcd(x, y) << nl;

    if(x == y)
    {
        if(x > 1) cout << 0 << nl;
        else cout << 1 << nl;
        return;
    }

    ll cnt = (y-x);

    // for (ll i = x; i <= y-1; i++)
    // {
    //     if(__gcd(i, i+1) == 1) cnt++;
    // }
    
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}