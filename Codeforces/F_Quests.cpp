// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, c, d; cin >> n >> c >> d;
    vector<ll> a(n); for(auto &e : a) cin >> e;

    sort(all(a)); reverse(all(a));
    ll tot = 0;
    for (int i = 0; i < min(n, d); i++)
    {
        tot += a[i];
    }
    if(tot >= c)
    {
        cout << "Infinity" << nl; return;
    }
    
    auto canWePlace = [&](ll mid)
    {
        if(mid == 0) return (a[0]*d >= c);

        ll sum = 0, canTake = 0;
        if(mid >= n) sum = accumulate(all(a), 0ll);
        else
        {
            for (int i = 0; i < mid; i++)
            {
                sum += a[i];
            }
        }

        ll howManyTime = d/mid;
        canTake = howManyTime * sum;

        ll baki = d%mid;

        if(baki >= n)   
        {
            // canTake = accumulate(all(a), 0ll); // wrong, but why?
            for (int i = 0; i < n; i++)
            {
                canTake += a[i];
            }
            
        }   
        else 
        {
            for (int i = 0; i < baki; i++)
            {
                canTake += a[i];
            }   
        }
        return (canTake >= c);
    };

    ll res = -1, l = 0, r = 1E12;
    while (l <= r)
    {
        ll mid = l + (r-l)/2;
        if(canWePlace(mid+1))
        {
            res = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    
    if(res == -1) cout << "Impossible" << nl;
    else cout << res << nl;
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