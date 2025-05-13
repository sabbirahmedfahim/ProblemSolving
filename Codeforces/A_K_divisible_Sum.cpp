#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, k; cin >> n >> k;

    if(n <= k)
    {
        if(k%n == 0) cout << k/n << nl;
        else cout << (k/n) + 1 << nl;
    }
    else 
    {
        // TLE
        // for (int i = 0; ; i++)
        // {
        //     if(k * i >= n)
        //     {
        //         k *= i; break;
        //     }
        // }
        
        ll hi = 1E9, lo = 1, res = -1;
        while (lo <= hi)
        {
            ll mid = lo + (hi-lo)/2;
            if(k * mid >= n)
            {
                res = mid;
                hi = mid - 1;
            }
            else lo = mid + 1;
        }

        k *= res;
        
        if(k%n == 0) cout << k/n << nl;
        else cout << (k/n) + 1 << nl;
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