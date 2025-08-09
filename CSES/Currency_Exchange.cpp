// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll a1, b1, a2, b2; cin >> a1 >> b1 >> a2 >> b2;

    if(a1 == a2 && b1 == b2)
    {
        cout << "Yes" << nl; return;
    }

    // if(a1 == a2 || b1 == b2)
    // {
    //     cout << "No" << nl; return;
    // }

    if(a1 > a2 && b1 > b2)
    {
        for (ll i = 0; i < 1005; i++)
        {
            if((a1 - i - a2) == (b1 - (i * 5) - b2)) 
            {
                cout << "Yes" << nl; return;
            }
        }
        
        cout << "No" << nl;
        return;
    }

    if(a1 > a2 && b1 < b2)
    {
        for (ll i = 0; i < 1005; i++)
        {
            if((a1 - i - a2) == (b2 + (i * 5) - b1)) 
            {
                cout << "Yes" << nl; return;
            }
        }
        
        cout << "No" << nl;
        return;
    }
    if(a1 < a2 && b1 > b2)
    {
        for (ll i = 0; i < 1005; i++)
        {
            if((a2 + i - a1) == (b1 - (i * 5) - b2)) 
            {
                cout << "Yes" << nl; return;
            }
        }
        
        cout << "No" << nl;
        return;
    }
    if(a1 < a2 && b1 < b2)
    {
        for (ll i = 0; i < 1005; i++)
        {
            if((a2 + i - a1) == (b2 + (i * 5) - b1)) 
            {
                cout << "Yes" << nl; return;
            }
        }
        
        cout << "No" << nl;
        return;
    }

    // cout << "doin" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin >> t;
    for(ll tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}