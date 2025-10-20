#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k, a, b; cin >> n >> k >> a >> b;

    vector<pair<int, int>> vec(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> vec[i].first >> vec[i].second;
    }
    
    if(max(a, b) <= k) // 2tai major
    {
        cout << 0 << nl; return;
    }
    if(n == 2 || k == 0) // edge case
    {
        cout << abs(vec[a].first - vec[b].first) + abs(vec[a].second - vec[b].second) << nl; 
        return;
    }

    // a major
    if(a <= k && !(a == 1 && k == 1))
    {
        int currMn = 1E18;
        for (int i = 1; i <= k; i++)
        {
            if(i != b)
            {
                currMn = min(currMn, abs(vec[b].first - vec[i].first) + abs(vec[b].second - vec[i].second));
            }
        }
        currMn = min(currMn, abs(vec[a].first - vec[b].first) + abs(vec[a].second - vec[b].second));

        cout << currMn << nl;
        return;
    }

    // b major
    if(b <= k && !(b == 1 && k == 1))
    {
        int currMn = 1E18;
        for (int i = 1; i <= k; i++)
        {
            if(i != a)
            {
                currMn = min(currMn, abs(vec[a].first - vec[i].first) + abs(vec[a].second - vec[i].second));
                // cerr << currMn << nl;
            }
        }
        currMn = min(currMn, abs(vec[a].first - vec[b].first) + abs(vec[a].second - vec[b].second));

        cout << currMn << nl;
        return;
    }

    int x, y;
    ll currMnWithA = 1E18, currMnWithB = 1E18;

    for (int i = 1; i <= k; i++)
    {
        if(i != a)
        {
            int currMn = abs(vec[a].first - vec[i].first) + abs(vec[a].second - vec[i].second);
            if(currMnWithA > currMn)
            {
                x = i; currMnWithA = currMn;
            }
        }
        if(i != b)
        {
            int currMn = abs(vec[b].first - vec[i].first) + abs(vec[b].second - vec[i].second);
            if(currMnWithB > currMn)
            {
                y = i; currMnWithB = currMn;
            }
        }
    }
    
    int directDis = abs(vec[a].first - vec[b].first) + abs(vec[a].second - vec[b].second);

    vector<int> res;
    res.push_back(directDis);
    res.push_back(currMnWithA + currMnWithB);

    sort(all(res));
    cout << res.front() << nl;

    // cout << "Have Answer" << nl;
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