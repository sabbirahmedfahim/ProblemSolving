#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, s; cin >> n >> s;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int tot_one = accumulate(all(a), 0);
    if(tot_one < s)
    {
        cout << -1 << nl; return;
    }

    int curr = 0, good = 0;

    for (int l = 0, r = 0; r < n; l++)
    {
        curr += a[l] == 1;

        if(curr == s)
        {
            good = max(good, r - l + 1);
            while (l < n && a[l] != 1)
            {
                l++;
            }
            r++, curr--;
        }
    }
    
    cout << n - good << nl;
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