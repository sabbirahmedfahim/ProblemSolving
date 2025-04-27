#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n; cin >> n;
    // cout << n << nl;
    map<ll, ll> mp;
    set<ll> st;
    while (n)
    {
        mp[n%10]++;
        st.insert(n%10);
        n /= 10;
    }
    // print(st);

    map<ll, ll> res;

    for (ll i = 9; i >= 0; i--)
    {
        if(st.count(i)) 
        {
            res[i] = i;
            mp[i]--;
            if(mp[i] == 0) mp.erase(i);
        }
    }
    
    for (ll i = 9; i >= 0; i--)
    {
        if(!res.count(i))
        {
            ll mn = 99;
            for(auto [key, val] : mp)
            {
                if(key >= i) mn = min(mn, key);
            }
            res[i] = mn;
            mp[mn]--;
            if(mp[mn] == 0) mp.erase(mn);
        }
    }

    for (int i = 9; i >= 0; i--)
    {
        cout << res[i];
    }
    cout << nl;
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
