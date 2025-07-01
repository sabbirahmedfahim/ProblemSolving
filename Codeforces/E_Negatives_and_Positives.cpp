// took hints from the editorial, but i guess, i can do it again without any help
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<ll> a(n);
    for(auto &e : a) cin >> e;

    int zero = 0, neg = 0;
    ll sum = 0;
    for(auto e : a)
    {
        if(e == 0) zero++;
        if(e < 0) neg++;

        sum += abs(e);
    }

    if(zero) cout << sum << nl;
    else if(neg%2 == 0) cout << sum << nl;
    else
    {
        ll sml = 1E10;
        for(auto e : a) 
        {
            if(e < 0)
            {
                sml = min(sml, -e);
            }
            if(e > 0) sml = min(sml, e); // eta tutorial dekhe likhsi :)
        }
        sum -= 2ll * sml;
        cout << sum << nl;
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