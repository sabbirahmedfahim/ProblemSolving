// took hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n); for(auto &e : a) cin >> e;

    // 2 <= k <= 5
    // 1 <= n <= 10

    if(k == 2)
    {
        for(auto e : a)
        {
            if(e%2 == 0)
            {
                cout << 0 << nl; return;
            }
        }
        cout << 1 << nl; return;
    }
    if(k == 3)
    {
        int res = 1E5;
        for(auto e : a)
        {
            if(e%k == 0)
            {
                cout << 0 << nl; return;
            }
            int modd = e%k; 
            if(e <= k) res = min(res, k - e);
            else 
            {
                modd = k-modd; 
                res = min(res, modd);   
            }
            // cout << "#" << modd << nl;
        }
        cout << res << nl; return;
    }
    if(k == 4)
    {
        int even = 0, mn = 1E5;
        for(auto e : a)
        {
            if(e%4 == 0)
            {
                cout << 0 << nl; return;
            }
            if(e%2 == 0) even++;

            int modd = e%k; 
            if(e <= k) mn = min(mn, k - e);
            else 
            {
                modd = k-modd; 
                mn = min(mn, modd);
            }
        }
        if(even >= 2) cout << 0 << nl;
        else if(even == 1) cout << 1 << nl;
        else cout << min(mn, 2) << nl;
        return;
    }
    if(k == 5)
    {
        int res = 1E5;
        for(auto e : a)
        {
            if(e%k == 0)
            {
                cout << 0 << nl; return;
            }
            int modd = e%k; 
            if(e <= k) res = min(res, k - e);
            else 
            {
                modd = k-modd; 
                res = min(res, modd);   
            }
            // cout << "#" << modd << nl;
        }
        cout << res << nl; return;
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
