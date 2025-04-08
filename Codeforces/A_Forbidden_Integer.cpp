#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;

    int res = 0;
    vector<int> hilu;

    for (int i = 1; i <= k; i++)
    {
        if (i == x)
            continue;
        // if(res + i <= n) res += i;
        while (res + i <= n)
        {
            res += i;
            hilu.push_back(i);
        }

        if (res == n)
        {
            cout << "YES" << nl << hilu.size() << nl;
            print(hilu);
            return;
        }

        if (res + 1 == n && k >= 3)
        {
            hilu[0] = 3;
            cout << "YES" << nl << hilu.size() << nl;
            print(hilu);
            return;
        }
    }

    // cout << res << nl;

    cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}