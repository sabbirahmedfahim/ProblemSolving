#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<pair<int, int>> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin() + 1, a.end());
    reverse(a.begin() + 1, a.end());
    // print(a);

    vector<ll> res(n + 1);
    res[0] = 0;
    ll cost = 0;
    ll left = 0, right = 0;
    bool who = true;
    for (int i = 1; i <= n; i++)
    {
        if(who)
        {
            left++;
            res[a[i].second] = left;
            cost += 1ll * a[i].first * (2ll * left);
        }
        else 
        {
            right++;
            res[a[i].second] = -right;
            cost += 1ll * a[i].first * (2ll * right);
        }

        who = !who;
    }
    
    cout << cost << nl;
    print(res);
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