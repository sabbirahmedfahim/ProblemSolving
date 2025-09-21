#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    map<int, int> mp;
    for(auto e : a) mp[e]++;

    bool aliceNow = true;
    ll alice1 = 0, bob1 = 0;
    for(auto [x, y] : mp)
    {
        if(aliceNow)
        {
            alice1 += ((x / 2) + (x & 1)) * y;
            bob1 += (x / 2) * y;
        }
        else 
        {
            bob1 += ((x / 2) + (x & 1)) * y;
            alice1 += (x / 2) * y;
        }

        if(y & 1) aliceNow = !aliceNow;
    }

    ll alice2 = 0, bob2 = 0;
    vector<pair<int, int>> revMp;
    for(auto [x, y] : mp)
    {
        revMp.push_back({x, y});
    }
    reverse(all(revMp));
    for(auto [x, y] : revMp)
    {
        if(aliceNow)
        {
            alice2 += ((x / 2) + (x & 1)) * y;
            bob2 += (x / 2) * y;
        }
        else 
        {
            bob2 += ((x / 2) + (x & 1)) * y;
            alice2 += (x / 2) * y;
        }

        if(y & 1) aliceNow = !aliceNow;
    }


    if(alice1 >= alice2) cout << alice1 << " " << bob1 << nl;
    else cout << alice2 << " " << bob2 << nl;
}
int_fast32_t main()
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