// resolved from the editorial (good to read, it helped)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    for (int i = 0; i < n; i++)
    {
        if(i % 2) a[i] = -a[i];
    }
    // print(a);
    
    vector<ll> pref(n);
    map<ll, ll> mp;
    pref[0] = a[0];
    mp[a[0]]++;
    mp[0]++; // this because if there is a situation of sum1 - sum2 == 0

    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i];

        if(mp.count(pref[i]))
        {
            cout << "YES" << nl; 
            return;
        }

        mp[pref[i]]++;
    }
    // print(pref);
    
    cout << "NO" << nl;
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