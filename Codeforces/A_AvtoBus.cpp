// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n; cin >> n;
    if(n < 4 || n & 1) 
    {
        cout << -1 << nl; return;
    }
    if(n%4 == 0 && n%6 == 0)
    {
        cout << n/6 << " " << n/4 << nl;
    }
    else 
    {
        ll mn = 0;
        if(n%6 == 0) 
        {
            mn = n/6;
        }
        else 
        {
            mn = n/6;
            if(n%6 == 2 && n-8 >= 0)
            {
                mn = ((n-8)/6) + 2;
            } 
            else if(n%6 == 4 && n-4 >= 0)
            {
                mn = ((n-4)/6) + 1;
            }
        }
        cout << mn << " ";
        // ll mn6 = 0, mn4 = 0;
        // if(n%4 == 0)
        // {
        //     mn4 = n/4;
        // }
        // else
        // {
        //     mn4 = n/4;
        //     mn4--, mn6++;
        // }
        // cout << max(1ll* 0, mn4) + mn6 << nl;
        cout << n/4 << nl; // ekh minus kore then aro ekh plus kore kicu e hoy na
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}