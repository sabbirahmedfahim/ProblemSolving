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

    vector<int> mp(n);
    int curr_idx = 1;
    mp[0] = curr_idx;

    for (int i = 1; i < n; i++)
    {
        if(a[i] != a[i - 1]) mp[i] = ++curr_idx;
        else mp[i] = curr_idx;
    }
    // print(mp);
    
    int q; cin >> q;
    while (q--)
    {
        int l, r; cin >> l >> r;
        l--, r--;

        if(mp[l] == mp[r]) cout << -1 << " " << -1 << nl;
        else
        {
            int lo = l + 1, hi = r, res = -1;
            while (lo <= hi)
            {
                int mid = lo + ((hi - lo) >> 1);

                if(mp[mid] == mp[l]) lo = mid + 1;
                else if(mp[mid] > (mp[l] + 1)) hi = mid - 1;
                else 
                {
                    res = mid; break;
                }
            }
            cout << l + 1 << " " << res + 1 << nl;
            // cout << "OK" << nl;
        }
    }
    
    cout << nl;
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