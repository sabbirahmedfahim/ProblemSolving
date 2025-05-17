#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n); for(auto &e : a) cin>>e;

    ll res = -1E9, cur = 0;
    int parity = -1; // neutral, even, odd
    for (int i = 0; i < n; i++)
    {
        if(parity == -1) // only if i == 0
        {
            parity = (a[i] & 1);
            cur = a[i];
        }
        else if(parity == 1)
        {
            if(a[i] & 1)
            {
                cur = a[i]; 
            }
            else 
            {
                if(cur < 0) cur = a[i];
                else cur += a[i]; 
                parity = (a[i] & 1);
            }
        }
        else
        {
            if(a[i]%2 == 0)
            {
                cur = a[i]; 
            }
            else 
            {
                if(cur < 0) cur = a[i];
                else cur += a[i]; 
                parity = (a[i] & 1);
            }
        }
        // cout << cur << nl;
        res = max(res, cur);
    }
    
    cout << res << nl;
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