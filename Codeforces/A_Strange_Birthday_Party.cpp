#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int ll
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    vector<int> a(n + 1), b(m + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));

    map<int, vector<int>> availableValues;
    for (int i = 1; i <= m; i++)
    {
        cin >> b[i];
        availableValues[b[i]].push_back(i);
    }

    int cost = 0;

    for (int i = n; i >= 1; i--)
    {
        int purchase = b[a[i]];

        while (!availableValues.empty() && availableValues.begin()->second.back() > a[i])
        {
            availableValues.begin()->second.pop_back();

            if(availableValues.begin()->second.empty()) availableValues.erase(availableValues.begin()->first);
        }
        
        if(!availableValues.empty() && availableValues.begin()->first < purchase) 
        {
            purchase = availableValues.begin()->first;

            availableValues.begin()->second.pop_back();

            if(availableValues.begin()->second.empty()) availableValues.erase(availableValues.begin()->first);
        }

        cost += purchase;
    }
    
    cout << cost << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}