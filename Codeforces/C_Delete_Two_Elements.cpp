// self 50%, resolved from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n; cin >> n;
    vector<ll> v(n); for(auto &e : v) cin >> e;

    ll sum = accumulate(all(v), 0ll);
    // cout << sum << nl;
    ll mean = sum/n; // worthless, just written
    ll shouldBeRemoved = (2ll*sum)/n;
    // cout << shouldBeRemoved << nl;
    if((2ll*sum)%n != 0)
    {
        cout << 0 << nl; return;
    }

    // next part
    map<ll, ll> mp;
    for(auto e : v) mp[e]++;
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        ll need = shouldBeRemoved - v[i];
        if(mp.count(need))
        {
            if(need == v[i] && mp[v[i]] == 1) continue;
 
            if(need == v[i])
            {
                ll x = mp[v[i]];
                ll tot_cnt = (x*(x-1))/2; // formulla, yeah pretty easy
                cnt += tot_cnt;
                mp.erase(v[i]); // once use them then erase
            }
            else 
            {
                ll x_cnt = mp[v[i]], y_cnt = mp[need];
                ll x_y = x_cnt * y_cnt; // self made formulla hahaha
                // cout << x_y << nl;
                cnt += x_y;
 
                // mp[v[i]]--;
                mp.erase(v[i]);
                // mp[need]--;
                mp.erase(need);
            }
        }
    }

    cout << cnt << nl;
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