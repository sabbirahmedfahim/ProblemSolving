#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll k, x; cin >> k >> x;

    ll sum_until_k = (k * (k + 1)) / 2;

    if(sum_until_k >= x)
    {
        ll lo = 1, hi = k, res = -1;
        while(lo <= hi)
        {
            ll mid = lo + (hi - lo) / 2;
            ll currSum = (mid * (mid + 1)) / 2;
            if(currSum <= x)
            {
                res = mid;
                if(currSum != x) res++;
                lo = mid + 1;
            }
            else hi = mid - 1;
        }
        cout << res << nl;
    }
    else
    {
        ll currAns = k;
        x -= sum_until_k; // rem x
        ll sum_until_k_minus_one = sum_until_k - k;
        // cerr << sum_until_k_minus_one << " : " << x << nl;
        if(x == 0)
        {
            cout << k << nl; return;
        }

        ll lo = 1, hi = k - 1, res = 1;
        while(lo <= hi)
        {
            ll mid = lo + (hi - lo) / 2;
            ll arekta = k - 1 - mid;
            ll willReduce = 0;
            if(arekta > 0) willReduce = (arekta * (arekta + 1)) / 2;
            ll currSum = sum_until_k_minus_one - willReduce;
            // cerr << "#" << currSum << nl;
            
            if(currSum <= x)
            {
                res = mid;
                if(currSum != x && mid < k - 1) res++;
                lo = mid + 1;
            }
            else hi = mid - 1;
        }

        // cerr << res << nl;
        currAns += res;

        currAns = min((2ll * k) - 1ll, currAns);

        cout << currAns << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}