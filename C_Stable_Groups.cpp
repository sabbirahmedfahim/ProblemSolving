#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, k, x; cin >> n >> k >> x;
    vector<ll> a(n);
    for(auto &e : a) cin >> e;
    sort(all(a));
    // print(a);

    vector<ll> groups;
    ll curr = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if(a[i + 1] - a[i] <= x) 
        {
            curr++;
        }
        else 
        {
            ll mid = a[i] + (a[i + 1] - a[i]) / 2;
            if(a[i + 1] - mid <= x && k) 
            {
                curr++; k--; a[i] = mid;
            }
            else 
            {
                groups.push_back(curr);
                curr = 1;
            }
        }
        // cerr << groups.size() << nl;
    }
    // cerr << "#" << curr << nl;
    if(curr > 1) groups.push_back(curr);

    cout << groups.size() << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}