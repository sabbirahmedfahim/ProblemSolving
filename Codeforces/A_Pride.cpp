#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int GCD = a[0];
    for(auto e : a) GCD = __gcd(GCD, e);

    if(GCD != 1)
    {
        cout << -1 << nl; return;
    }

    if(*min_element(all(a)) == 1)
    {
        int one = 0;
        for(auto e : a) if(e == 1) one++;

        cout << n - one << nl; return;
    }

    auto canWePlace = [&](int mid)
    {
        for (int i = 0; i < n; i++)
        {
            GCD = a[i];
            for (int j = i; j < min(i + mid, n); j++)
            {
                GCD = __gcd(GCD, a[j]);
            }

            if(GCD == 1) return true;
        }
        
        return false;
    };

    int hi = n, lo = 1, res = -1;
    while (hi >= lo)
    {
        int mid = lo + (hi - lo) / 2;
        if(canWePlace(mid))
        {
            res = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    
    res--;
    cout << res + n - 1 << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}