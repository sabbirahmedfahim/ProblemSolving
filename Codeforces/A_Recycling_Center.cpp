#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<pair<int, int>> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin() + 1, a.end());
    
    set<int> seconds;
    for (int i = 1; i <= n; i++)
    {
        if(a[i].first > k) continue;

        ll data = a[i].first;
        int sec = 0;

        for (int j = 1; j <= n; j++)
        {
            data *= 2;
            sec++;
            if(data > k)
            {
                data /= 2; sec--; break;
            }
        }
        for (int j = sec; j >= 0; j--)
        {
            if(!seconds.count(j))
            {
                seconds.insert(j); break;
            }
        }
    }

    cout << n - seconds.size() << nl;
}
int_fast32_t main()
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