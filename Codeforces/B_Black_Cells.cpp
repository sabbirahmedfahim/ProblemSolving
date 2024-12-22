// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    if(n%2 == 0)
    {
        ll mx = 0;
        for (int i = 0; i < n; i+=2) mx = max(mx, v[i+1]-v[i]);
        cout << mx << nl;
    }
    else 
    {
        /* every time ekta element exclude kore jei maximum ta minimum hobe sheta amader answer */
        ll ans = 1E18;
        for (int i = 0; i < n; i++)
        {
            ll mx = 1;
            if(i%2 == 0)
            {
                for (int j = 0; j < n; j+=2)
                {
                    if(i == j) // exclude an element
                    {
                        j--; continue;
                    } 
                    // cout << i << " - " << j << nl;
                    mx = max(mx, v[j+1] - v[j]);
                }
                ans = min(ans, mx);
            }
        }
        cout << ans << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}