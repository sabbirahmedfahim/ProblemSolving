// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> v(n+1);
    map<int, int> mp;
    for (int i = 1; i <= n; i++) 
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    // wanna find the longest subarray of unique elements
    int cur_l = 0, cur_r = 0, mx = 0, res_l = 0, res_r = 0;
    for (int i = 1; i <= n; i++)
    {
        if(mp[v[i]] == 1)
        {
            if(cur_l == 0) cur_l = i;
            cur_r = i;
        }
        else 
        {
            cur_l = 0, cur_r = 0;
        }

        if(cur_l != 0 && cur_r - cur_l + 1 > mx)
        {
            // cout << "##" << nl;
            mx = cur_r - cur_l + 1;
            // cout << "maxi " << mx << nl;
            res_l = cur_l;
            res_r = cur_r;
          }

    }

    if(mx == 0)
    {
        cout << 0 << nl; return;
    }

    cout << res_l << " " << res_r << nl;
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