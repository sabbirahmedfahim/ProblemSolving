// tool test case as hints
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n + 1);
    map<int, int> mp1, mp2;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i];

        mp1[sum] = i;
    }

    sum = 0; 
    int idx = 1;
    for (int i = n; i >= 1; i--)
    {
        sum += a[i];

        mp2[sum] = idx++;
    }
    
    int res = 0;
    for(auto [x, y] : mp1)
    {
        if(mp2.count(x) && (mp1[x] + mp2[x]) <= n)
        {
            res = max(res, mp1[x] + mp2[x]);
        }
    }
    cout << res << nl;
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