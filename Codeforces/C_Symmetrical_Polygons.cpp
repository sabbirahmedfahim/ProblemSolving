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

    map<int, int> freq;
    for(auto e : a) freq[e]++;

    vector<int> extraVal;
    ll res = 0;
    int koybar = 0;
    for(auto [x, y] : freq)
    {
        if(y & 1) 
        {
            extraVal.push_back(x);

            y--;
            if(y)
            {
                res += (x * y); koybar++;
            }
        }
        else res += (x * y), koybar++;
    }

    if(koybar == 0)
    {
        cout << 0 << nl; return;
    }

    sort(all(extraVal));

    ll toAdd = 0;

    if(extraVal.size() >= 2) toAdd += extraVal.back() + extraVal[(int)extraVal.size() - 2];
    else if(extraVal.size() == 1) toAdd = extraVal.back();

    if(extraVal.empty())
    {
        if(koybar == 1) cout << 0 << nl;
        else cout << res << nl;
    }
    else if(res <= extraVal.back()) cout << 0 << nl;
    else cout << res + toAdd << nl;
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