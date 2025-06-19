#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool isFair(ll n)
{
    ll x = n;
    while (x)
    {
        if(x%10 == 0) 
        {
            x /= 10; continue;
        }
        
        if(n % (x%10) != 0) return false;

        x /= 10;
    }
    return true;
}
void solve()
{
    ll n; cin >> n;

    for (ll i = n; ; i++)
    {
        if(isFair(i))
        {
            cout << i << nl; return;
        }
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

