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

    map<ll, ll> mp;
    ll shobarBoro = 0;
    for(auto e : a) 
    {
        mp[e]++;
        shobarBoro = max(shobarBoro, e);
    }

    ll currMex = 0, currMax = 0, tot1 = 0, tot2 = 0, tot3 = 0;
    // tot2 = shobarBoro * n; // uncommnet later
    ll curr = 0;

    for (int i = 0; i < n; i++)
    {
        if(mp.count(i))
        {
            curr = ((i + 1) + i);

            ll nibo = curr;

            ll nibona = shobarBoro * (n - i) * (i) + tot1;

            tot1 += nibo;
            tot2 = max(tot2, nibona);
        }
        else 
        {
            ll nibona = 0; 
            if(i == 0) nibona = max(shobarBoro * (n - i) + tot1, (n - i) + tot1);
            else nibona = max(shobarBoro * (n - i) * i + tot1, (n - i) * i + tot1);

            tot2 = max(nibona, tot2);

            break;
        }
    }
    
    cout << max(tot1, tot2) << nl;
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