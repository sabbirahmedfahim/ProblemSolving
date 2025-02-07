#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    int tmp = n; set<ll> s;
    while (tmp--)
    {
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int data; cin >> data; mn = min(mn, data);
        }
        s.insert(mn);
    }

    // print(s);
    for (ll i = 1; i <= 1E9+1; i++)
    {
        if(!s.count(i))
        {
            cout << i << nl; return;
        }
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