// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(auto &e : a) cin >> e;

    ll sum = accumulate(all(a), 0ll);

    sort(all(a));
    
    vector<ll> odd, even;
    for(auto e : a)
    {
        if(e & 1) odd.push_back(e);
        else even.push_back(e);
    }

    ll mnRes = 1E18;
    if(odd.size() >= 2) mnRes = min(mnRes, k * ((odd[0] + odd[1])/2));
    if(even.size() >= 2) mnRes = min(mnRes, k * ((even[0] + even[1])/2));
    if(odd.size() >= 1 && even.size() >= 1) mnRes = min(mnRes, k * ((odd[0] + even[0] + 1)/2));

    mnRes = k * ((a[0] + a[1] + ((a[0] + a[1]) % 2 == 1))/2);

    cout << sum + mnRes << nl;
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