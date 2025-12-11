// took hints from LLM 
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, cost; cin >> n >> cost;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin() + 1, a.end());

    vector<ll> pref(n + 1);
    pref[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }
    // print(pref);

    ll tot_cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        ll lo = 1, hi = 1E9, res = -1;
        while (lo <= hi)
        {
            ll mid = lo + (hi - lo) / 2;
            if(pref[i] + (i * (mid - 1)) <= cost)
            {
                res = mid;
                lo = mid + 1;
            }
            else hi = mid - 1;
        }
        if(res != -1) tot_cnt += res;
    }
    
    cout << tot_cnt << nl;
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