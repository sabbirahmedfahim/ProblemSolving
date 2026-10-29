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
    for(auto &e : a) cin >> e;

    map<int, int> mp;
    for(auto e : a) mp[e]++;

    int ans = 0, have = 0;
    for (int i = 0; ; i++)
    {
        if(mp[i] == 0) break;

        if(mp[i] < k) 
        {
            int need = k - mp[i];
            if(have >= need)
            {
                have -= need;
                mp[i] += need;
            }
        }

        if(mp[i] >= k) 
        {
            ans++;

            have += mp[i] - k;
        }
        else break;
    }
    
    cout << ans << nl;
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