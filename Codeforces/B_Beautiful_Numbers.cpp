#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll X; cin >> X;

    ll sum = 0;
    deque<ll> a;
    while(X)
    {
        sum += X % 10;
        a.push_back(X % 10);

        X /= 10;
    }

    // cerr << sum << nl;

    if(sum < 10)
    {
        cout << 0 << nl; return;
    }

    
    ll cnt1 = 0, cnt2 = 0;
    deque<ll> b = a;
    sum = a.back(); a.pop_back();
    if(a.size() > 0) sort(all(a));

    for (ll i = 0; i < a.size(); i++)
    {
        sum += a[i];

        if(sum > 9) cnt1++;
    }
    
    // cout << cnt1 << nl;

    sum = 0;
    if(b.back() > 1) 
    {
        cnt2++;
        sum += 1;
        b.pop_back();
    }
    if(b.size() > 0) sort(all(b));
    for (ll i = 0; i < b.size(); i++)
    {
        sum += b[i];

        if(sum > 9) cnt2++;
    }
    
    cout << min(cnt1, cnt2) << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll t; cin >> t;
    for(ll tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}