// adhoc + took hints from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin>>e;
    sort(all(a)); 

    map<int, int> mp;
    for(auto e : a) mp[e]++;

    for (int i = 0; i < n; i++)
    {
        int target = a[i] + abs(k);
        if(target < 0) continue;

        mp[a[i]]--;
        if(mp[a[i]] == 0) mp.erase(a[i]);

        if(mp.count(target)) 
        {
            cout << "YES" << nl; return;
        }
    }
    
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