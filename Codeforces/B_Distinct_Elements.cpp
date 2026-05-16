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

    vector<ll> res;
    ll curr = 1;
    res.push_back(curr);
    if(n > 1)
    {
        if(a[0] == a[1] - 1) res.push_back(curr);
        else res.push_back(++curr);
    }

    for (int i = 1; i < n - 1; i++)
    {
        ll prev = a[i] - a[i - 1], nxt = a[i + 1] - a[i];

        if(prev < nxt) res.push_back(++curr);
        else if(prev == nxt) res.push_back(res[res.size() - nxt]);
        else res.push_back(res[res.size() - (prev - nxt)]);

        curr = res.back();
    }
    
    print(res);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}